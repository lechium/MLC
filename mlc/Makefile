ARCHS = arm64e armv7 armv7s arm64
TARGET = iphone
export GO_EASY_ON_ME=1
export SDKVERSION=12.1
THEOS_DEVICE_IP=192.168.0.6
DEBUG=0

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = MLC 
MLC_FILES = game.xm NSObject+AssociatedObjects.m KIF/UIEvent+KIFAdditions.m KIF/UIView-KIFAdditions.m KIF/CGGeometry-KIFAdditions.m KIF/UIScreen+KIFAdditions.m KIF/UIWindow-KIFAdditions.m KIF/IOHIDEvent+KIF.m KIF/UITouch-KIFAdditions.m KIF/NSError-KIFAdditions.m KIF/UIApplication-KIFAdditions.m KIF/UIView-Debugging.m MFICControllerManager.m #FingerTips/MBFingerTipWindow.m
MLC_FILES += PureLayout/ALView+PureLayout.m PureLayout/NSArray+PureLayout.m PureLayout/NSLayoutConstraint+PureLayout.m
MLC_FILES += MFICPrefTableViewController.m MFICControlListTableViewController.m UIWindow+Additions.m
MLC_FILES += RKDropdownAlert/RKDropdownAlert.m NSDictionary+nullRemoval.m
MLC_FILES += extobjc/EXTRuntimeExtensions.m extobjc/EXTScope.m  
MLC_LIBRARIES = substrate
MLC_FRAMEWORKS = Foundation IOKit GameController
MLC_CFLAGS += -I.-IRKDropdownAlert -Iextobjc -IPureLayout -IKIF -fobjc-arc -miphoneos-version-min=9.0
MLC_LDFLAGS = -miphoneos-version-min=9.0 -undefined dynamic_lookup
#MLC_CODESIGN_FLAGS=-Slibrespring.xml

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 PES19CBT"
