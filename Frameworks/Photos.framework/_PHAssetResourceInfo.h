/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface _PHAssetResourceInfo : NSObject {
    unsigned int _cplResourceType;
    NSURL *_fileURL;
    NSString *_originalFileName;
    PHSandboxExtensionWrapper *_sandboxExtensionWrapper;
    NSString *_uti;
}

@property (nonatomic, readonly) unsigned int cplResourceType;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *originalFileName;
@property (nonatomic, readonly) PHSandboxExtensionWrapper *sandboxExtensionWrapper;
@property (nonatomic, readonly) NSString *uti;

- (void).cxx_destruct;
- (void)acquireSandboxExtensionIfNeeded;
- (unsigned int)cplResourceType;
- (id)description;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 fileName:(id)arg2 uti:(id)arg3 cplResourceType:(unsigned int)arg4;
- (id)originalFileName;
- (id)sandboxExtensionWrapper;
- (id)uti;

@end