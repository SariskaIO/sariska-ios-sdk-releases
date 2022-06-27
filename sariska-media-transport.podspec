Pod::Spec.new do |s|
  s.name             = 'sariska-media-transport'
  s.version          = '1.1.2.2'
  s.summary          = 'Sariska iOS SDK'
  s.description      = 'Sariska is a WebRTC compatible, free and Open Source video conferencing system that provides browsers and mobile applications with Real Time Communications capabilities.'
  s.homepage         = 'https://github.com/SariskaIO/sariska-ios-sdk-releases'
  s.license          = 'Apache 2'
  s.authors          = 'The sariska project authors'
  s.source           = { :git => 'https://github.com/SariskaIO/sariska-ios-sdk-releases.git', :tag => s.version }

  s.platform         = :ios, '11.0'

  s.vendored_frameworks = 'Frameworks/sariska.xcframework', 'Frameworks/WebRTC.xcframework'
  
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
end
