OneAPM-iOS
===================
这是一个 [OneAPM](http://oneapm.com/mi/ios.html) iOS版SDK的非官方镜像。

官方集成指南请参照 [http://oneapm.udesk.cn/hc/articles/176](http://oneapm.udesk.cn/hc/articles/176)。

OneAPM是一家应用性能管理云解决方案提供方，针对Gartner应用性能管理所阐述的5个纬度，一一击破，实现了真实用户体验管理、应用架构自动发现和建模、自定义事务管理和深度性能剖析、应用组件深度监控、性能问题分析。为开发者提供简单、便捷、精确、有效的应用性能管理云解决方案，主要面向独立开发者、创业团队和中小型企业。

## 使用CocoaPods安装
[CocoaPods](http://cocoapods.org) 是开发 OS X 和 iOS 应用程序的一个第三方库的依赖管理工具。

要使用 OneAPM SDK，推荐这样配置Podfile:

```ruby
# The front repo is prior if conflicted
# CocoaPods private repo
source 'https://github.com/jcccn/PodSpecs.git'
# CocoaPods master repo
source 'https://github.com/CocoaPods/Specs.git'

platform :ios,'7.0'

# ignore all warnings from all pods
inhibit_all_warnings!

pod 'OneAPM'

```

也可以这样配置Podfile:

```ruby
# CocoaPods master repo
source 'https://github.com/CocoaPods/Specs.git'

platform :ios,'7.0'

# ignore all warnings from all pods
inhibit_all_warnings!

pod 'OneAPM', :git => 'https://github.com/jcccn/OneAPM-iOS.git'

```

## 使用
在项目文件`[app_name]-Prefix.pch`（通常在文件夹`Support Files`中）中，引入 OneAPM 头文件：
```objective-c
#import <OneAPM/OneAPM.h>
```

在文件`AppDelegate.m`中添加如下代码，并确保它在`- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions`方法的第一行中：

```objective-c
[OneAPM startWithApplicationToken:OneAPMAppToken];
```

Clean Project，并重新在模拟器或设备中启动应用程序，开始应用性能管理

提示：OneAPM iOS SDK目前支持iOS 6.0之后的版本；在iOS6.0之前的版本中安装OneAPM agent不会导致报错，但无法获取性能数据。

静候5分钟，等待应用程序向OneAPM发送应用程序性能数据，即可开始使用OneAPM应用性能管理。

详细的功能使用，请参考 [官方文档](http://oneapm.com/mi/ios.html)。

## 技术支持
若应用程序无数据展现，或安装过程中有任何问题，您可以采取以下方式解决问题：

1. 访问OneAPM的 [帮助中心](http://support.oneapm.com/)，创建一个 [工单](http://oneapm.udesk.cn/hc/submit_a_request)
2. 联系 OneAPM 客服人员：
	- 技术支持热线：400-622-3101
	- OneAPM客服邮箱：support@oneapm.com
