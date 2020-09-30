#
# Be sure to run `pod lib lint MAGSCDataStatisticsSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|

  s.name             = 'MAGOmipaySDK'
  s.version          = '1.0.0'
  s.summary          = 'MAGOmipaySDK'
  s.description      = <<-DESC
                        POLI澳洲支付
                       DESC

  s.homepage         = 'https://www.omipay.net/Help/API_new.html'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'zisu' => 'zisulwl@163.com' }
  s.source           = { :git => 'https://github.com/lyeah-ios/MAGOmipaySDK.git', :tag => s.version.to_s }

  s.platform     = :ios
  s.ios.deployment_target = '9.0'

  s.requires_arc = true

  s.ios.vendored_frameworks = 'MAGOmipaySDK/OmipaySDK.framework'

  s.frameworks          = 'Security', 'SystemConfiguration', 'CoreGraphics', 'CoreTelephony', 'CFNetwork', 'CoreText', 'QuartzCore', 'CoreMotion'
  s.libraries           = 'sqlite3', 'c++', 'z'
  
end
