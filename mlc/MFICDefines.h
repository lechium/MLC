/**
 
 These constants exist to simplify key mapping in the project (and for autocompletion sanity)
 
 The top section are all the different buttons pubc simulates the touches for the bottom list
 is the constants for the buttons we support custom mapping for on said controller.
 
 Through / Press
 Clear / Shoot
 Switch / Pass
 Dash
 
 */

static NSString * const MLCallForBackup = @"MLCallForBackup";
static NSString * const MLSkillOne = @"MLSkillOne";
static NSString * const MLSkillTwo = @"MLSkillTwo";
static NSString * const MLSkillThree = @"MLSkillThree";
static NSString * const MLWeaponAttack = @"MLWeaponAttack";
static NSString * const MLRetreat = @"MLRetreat";
static NSString * const MLOrderAttack = @"MLOrderAttack";
static NSString * const MLTopRightAction = @"MLTopRightAction";
static NSString * const MLRegen = @"MLRegen";
static NSString * const MLRecall = @"MLRecall";
static NSString * const MLMagGlass = @"MLMagGlass";
static NSString * const MLStore = @"MLStore";
static NSString * const MLChat = @"MLChat";
static NSString * const MLOKButton = @"MLOKButton";
static NSString * const MLContinue = @"MLContinue";
static NSString * const MLSuggestedItemOne = @"MLSuggestedItemOne";
static NSString * const MLSuggestedItemTwo = @"MLSuggestedItemTwo";
static NSString * const MLSkillOnePlus = @"MLSkillOnePlus";
static NSString * const MLSkillTwoPlus = @"MLSkillTwoPlus";

static NSString * const MLActionMenuButton = @"MLActionMenuButton";

static NSString * const LeftThumbstick = @"LeftThumbstick";
static NSString * const RightThumbstick = @"RightThumbstick";
static NSString * const LeftThumbstickButton = @"LeftThumbstickButton";
static NSString * const RightThumbstickButton = @"RightThumbstickButton";
static NSString * const LeftShoulder = @"LeftShoulder";
static NSString * const RightShoulder = @"RightShoulder";
static NSString * const RightTrigger = @"RightTrigger";
static NSString * const LeftTrigger = @"LeftTrigger";
static NSString * const ButtonA = @"ButtonA";
static NSString * const ButtonB = @"ButtonB";
static NSString * const ButtonX = @"ButtonX";
static NSString * const ButtonY = @"ButtonY";
static NSString * const DpadUp = @"Dpad.up";
static NSString * const DpadDown = @"Dpad.down";
static NSString * const DpadLeft = @"Dpad.left";
static NSString * const DpadRight = @"Dpad.right";
static NSString * const Menu = @"Menu";

static NSString *const ExperimentalControl = @"ExperimentalControl";





typedef enum {
    
    kMLSkillOne,
    kMLSkillTwo,
    kMLSkillThree,
    kMLCallForBackup,
    kMLWeaponAttack,
    kMLRetreat,
    kMLOrderAttack,
    kMLTopRightAction,
    kMLRegen,
    kMLRecall,
    kMLMagGlass,
    kMLStore,
    kMLChat,
    kMLOKButton,
    kMLContinue,
    kMLSuggestedItemOne,
    kMLSuggestedItemTwo,
    kMLSkillOnePlus,
    kMLSkillTwoPlus,
    kMLActionTypeUndefined,
    kMLActionStartButton,
    kMLActionMenuButton,
    
} MLActionType;

// System info
#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#import <GameController/GameController.h>

@interface GCController (pubc)

@property (nonatomic) NSObject *gateKeeper;

@end
