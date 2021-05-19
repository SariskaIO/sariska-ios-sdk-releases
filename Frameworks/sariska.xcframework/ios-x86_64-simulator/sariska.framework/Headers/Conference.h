#import <Foundation/Foundation.h>
#import "JitsiLocalTrack.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^ConferenceCallbackParam0)(void);
typedef void(^ConferenceCallbackParam1)(id);
typedef void(^ConferenceCallbackParam2)(id,id);
typedef void(^ConferenceCallbackParam3)(id,id,id);
typedef void(^ConferenceCallbackParam4)(id,id,id,id);

@interface Conference: NSObject

@property (class) NSMutableDictionary *bindingsDel;
@property (class) BOOL hidden;
@property (class) NSString * userId;
@property (class) NSString * role;
@property (class) NSString * name;
@property (class) NSString * email;
@property (class) NSString * avatar;
@property (class) BOOL dtmf;

- (Conference *)init;
- (BOOL)isHidden;
- (BOOL)isDTMFSupported;
- (NSString *)getUserId;
- (NSString *)getUserRole;
- (NSString *)getUserEmail;
- (NSString *)getUserAvatar;
- (NSString *)getUserName;
- (void)join;
- (void)join: (NSString *) password;
- (void)grantOwner:(NSString *) id;
- (void)setStartMutedPolicy:(NSDictionary *)policy;
- (void)setReceiverVideoConstraint:(NSNumber *)resolution;
- (void)setSenderVideoConstraint:(NSNumber *)resolution;
- (void)sendMessage:(NSString *)message;
- (void)sendMessage:(NSString *)message to: (NSString *) to;
- (void)setLastN:(NSNumber *)num;
- (void)muteParticipant:(NSString * ) id mediaType: (NSString *) mediaType;
- (void)setDisplayName:(NSString *)name;
- (void)selectParticipant:(NSString *) id;
- (void)addTrack:(JitsiLocalTrack *) track  NS_SWIFT_NAME(addTrack(track:));
- (void)removeTrack:(JitsiLocalTrack *) track NS_SWIFT_NAME(removeTrack(track:));
- (void)replaceTrack:(JitsiLocalTrack *) oldTrack newTrack: (JitsiLocalTrack *) newTrack NS_SWIFT_NAME(replaceTrack(oldTrack:newTrack));
- (void)lock:(NSString *)password;
- (void)setSubject:(NSString *)subject;
- (void)unlock;
- (void)kickParticipant:(NSString *) id;
- (void)pinParticipant:(NSString *) id;
- (void)stopTranscriber;
- (void)startTranscriber;
- (void)revokeOwner:(NSString *) id;
- (void)startRecording:(NSString *) mode streamId:(NSString *)streamId;
- (void)stopRecording:(NSString *) sessionId;
- (void)setLocalParticipantProperty:(NSString *) propertyKey propertyValue:(NSString *) propertyValue;
- (void)sendFeeback:(NSString *) overallFeedback propertyValue:(NSString *) detailedFeedback;
- (void)leave;
- (void)addEventListener: (NSString * ) event callback0: (ConferenceCallbackParam0) callback0;
- (void)addEventListener: (NSString *) event callback1: (ConferenceCallbackParam1) callback1;
- (void)addEventListener: (NSString *) event callback2: (ConferenceCallbackParam2) callback2;
- (void)addEventListener: (NSString *) event callback3: (ConferenceCallbackParam3) callback3;
- (void)addEventListener: (NSString *) event callback4: (ConferenceCallbackParam4) callback4;
- (void)removeEventListener: (NSString *) event;
@end
NS_ASSUME_NONNULL_END
