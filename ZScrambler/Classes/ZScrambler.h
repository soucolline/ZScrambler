#import <Foundation/Foundation.h>

@interface ZScrambler : NSObject

- (nonnull NSString *)getScrStringByType: (int)type subset: (int)subset;
- (void) initSq1;
+ (nonnull NSArray<NSString *> *) scrambleTypes;

@end
