/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */



@interface VMUDySymTabLoadCommand : VMULoadCommand 
{
    NSUInteger _ilocalsym;
    NSUInteger _nlocalsym;
    NSUInteger _iextdefsym;
    NSUInteger _nextdefsym;
    NSUInteger _iundefsym;
    NSUInteger _nundefsym;
    NSUInteger _tocoff;
    NSUInteger _ntoc;
    NSUInteger _modtaboff;
    NSUInteger _nmodtab;
    NSUInteger _extrefsymoff;
    NSUInteger _nextrefsyms;
    NSUInteger _indirectsymoff;
    NSUInteger _nindirectsyms;
    NSUInteger _extreloff;
    NSUInteger _nextrel;
    NSUInteger _locreloff;
    NSUInteger _nlocrel;
}


- (id)initWithMemory:(id)arg1;
- (BOOL)isDySymTab;
- (NSUInteger)indirectsymoff;
- (NSUInteger)nindirectsyms;

@end
