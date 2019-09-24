Pod::Spec.new do |s|

#名称
s.name         = 'YMOvuolaFramework'

#版本号
s.version      = '1.0.0'

#许可证
s.license      = { :type => 'MIT' } 

#项目主页地址 
s.homepage     = 'https://github.com/Zhangyalong25/YMOvuolaFramework'    

#作者
s.authors      = { 'Zhangyalong25' => '18357027449@163.com' }

#简介
s.summary      = 'A delightful iOS framework.'  

#项目的地址 （注意这里的tag位置，可以自己写也可以直接用s.version，但是与s.version一定要统一）
s.source       = { :git => 'https://github.com/Zhangyalong25/YMOvuolaFramework.git', :tag => "v#{s.version}" }

#支持最小系统版本
s.platform     = :ios, '9.0'

#需要包含的源文件 
s.source_files = 'YMOvuolaFramework.framework/Headers/*.{h}'

#你的SDK路径
s.vendored_frameworks = 'YMOvuolaFramework.framework'

#SDK头文件路径
s.public_header_files = 'YMOvuolaFramework.framework/Headers/YMOvuolaFramework.h'

#依赖库
s.libraries    = 'c++'

#依赖库
s.frameworks   = 'UIKit','Foundation'

end