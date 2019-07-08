#import "MFICDefines.h"
#import "MFICControllerManager.h"
#import <GameController/GameController.h>
#import "NSObject+AssociatedObjects.h"
//#import "FingerTips/MBFingerTipWindow.h"

%hook GCController

+ (NSArray<GCController *> *)controllers {

    return nil;
}

%end


%hook UnityAppController


- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 {

    %log;
    NSLog(@"MLC: #### in application:didFinishLaunchingWithOptions");
    MFICControllerManager *man = [MFICControllerManager sharedManager];
    
    [man listenForControllers];
 


    return %orig;

}

%end