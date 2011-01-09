/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;



@interface NSConcreteTask : NSTask 
{
    NSMutableDictionary *_dictionary;
    BOOL _hasExeced;
    BOOL _isRunning;
    BOOL _padding[2];
    NSInteger _suspendCount;
    NSInteger _pid;
    NSInteger _platformExitInfo;
    struct __CFFileDescriptor { } *_f;
}


- (NSInteger)terminationStatus;
- (NSInteger)_platformExitInformation;
- (NSInteger)terminationReason;
- (BOOL)isRunning;
- (void)launch;
- (void)launchWithDictionary:(id)arg1;
- (void)waitUntilExit;
- (void)setArguments:(id)arg1;
- (void)setCurrentDirectoryPath:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchPath:(id)arg1;
- (id)launchPath;
- (id)environment;
- (id)arguments;
- (id)currentDirectoryPath;
- (void)setTaskDictionary:(id)arg1;
- (id)taskDictionary;
- (void)interrupt;
- (void)terminate;
- (void)terminateTask;
- (BOOL)suspend;
- (BOOL)resume;
- (NSInteger)suspendCount;
- (void)setStandardInput:(id)arg1;
- (void)setStandardOutput:(id)arg1;
- (void)setStandardError:(id)arg1;
- (id)standardInput;
- (id)standardOutput;
- (id)standardError;
- (id)init;
- (void)dealloc;
- (void)finalize;
- (NSInteger)_procid;
- (NSInteger)processIdentifier;
- (void)setStartsNewProcessGroup:(BOOL)arg1;

@end
