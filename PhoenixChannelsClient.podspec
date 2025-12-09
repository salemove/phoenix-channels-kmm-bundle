Pod::Spec.new do |s|
    s.name                    = 'PhoenixChannelsClient'
    s.version                 = '1.1.1'
    s.summary                 = 'Glia Phoenix Channels Client'
    s.description             = 'The Glia Phoenix Channels KMM client'
    s.homepage                = 'https://github.com/salemove/ios-bundle'
    s.license                 = { :type => 'MIT', :text => File.read('LICENSE') }
    s.author                  = 'Glia Technologies, Inc.'
    s.source                  = { :http => 'https://github.com/salemove/phoenix-channels-kmm-bundle/releases/download/1.1.1/PhoenixChannelsClient.xcframework.zip' }
    s.module_name             = 'PhoenixChannelsClient'
    s.ios.deployment_target   = "13.0"
    s.ios.vendored_frameworks = 'PhoenixChannelsClient.xcframework'
    s.swift_version           = '5.3'
  end
