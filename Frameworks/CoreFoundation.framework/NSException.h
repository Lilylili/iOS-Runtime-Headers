/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@class NSArray, NSDictionary, NSString;

@interface NSException : NSObject <NSCopying, NSCoding> {
    NSString *name;
    NSString *reason;
    id reserved;
    NSDictionary *userInfo;
}

@property(copy,readonly) NSArray * callStackReturnAddresses;
@property(copy,readonly) NSArray * callStackSymbols;
@property(copy,readonly) NSString * name;
@property(copy,readonly) NSString * reason;
@property(copy,readonly) NSDictionary * userInfo;

+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (void)errnoRaise:(id)arg1 format:(id)arg2;
+ (id)exceptionWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (void)raise:(id)arg1 format:(id)arg2 arguments:(void*)arg3;
+ (void)raise:(id)arg1 format:(id)arg2;
+ (void)raiseWithError:(id)arg1;
+ (void)raiseWithError:(id)arg1;

- (id)_crashReporterString;
- (BOOL)_installStackTraceKeyIfNeeded;
- (id)callStackReturnAddresses;
- (id)callStackSymbols;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)error;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (int)localErrno;
- (int)localErrno;
- (id)name;
- (void)raise;
- (id)reason;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

@end
