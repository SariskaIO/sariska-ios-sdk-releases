#import <Foundation/Foundation.h>
#import "RTCVideoView.h"

NS_ASSUME_NONNULL_BEGIN
@interface JitsiLocalTrack : NSObject

@property (nonatomic)NSString *trackId;
@property (nonatomic)NSString *type;
@property (nonatomic)BOOL muted;
@property (nonatomic)NSString *streamURL;
@property (nonatomic)NSString *deviceId;

- (JitsiLocalTrack *)initWithOptions:(NSDictionary *) m;
- (NSString*)getDeviceId;
- (NSString*)getType;
- (NSString*)getStreamURL;
- (NSString*)getId;
- (void)switchCamera;
- (BOOL)isMuted;
- (BOOL)isLocal;
- (void)dispose;
- (RTCVideoView *)render;


@end
NS_ASSUME_NONNULL_END
