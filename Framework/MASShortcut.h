#import "MASKeyCodes.h"

@interface MASShortcut : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSUInteger keyCode;
@property (nonatomic, readonly) NSUInteger modifierFlags;
@property (nonatomic, readonly) UInt32 carbonKeyCode;
@property (nonatomic, readonly) UInt32 carbonFlags;
@property (nonatomic, readonly) NSString *keyCodeString;
@property (nonatomic, readonly) NSString *keyCodeStringForKeyEquivalent;
@property (nonatomic, readonly) NSString *modifierFlagsString;

- (instancetype)initWithKeyCode:(NSUInteger)code modifierFlags:(NSUInteger)flags;

+ (instancetype)shortcutWithKeyCode:(NSUInteger)code modifierFlags:(NSUInteger)flags;
+ (instancetype)shortcutWithEvent:(NSEvent *)anEvent;

@end
