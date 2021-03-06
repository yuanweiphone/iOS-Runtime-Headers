/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsBlitCommandEncoder : MTLToolsCommandEncoder <MTLBlitCommandEncoder>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned int hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned int)arg2 sourceBytesPerRow:(unsigned int)arg3 sourceBytesPerImage:(unsigned int)arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned int)arg2 sourceBytesPerRow:(unsigned int)arg3 sourceBytesPerImage:(unsigned int)arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9 options:(unsigned int)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned int)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned int)arg4 size:(unsigned int)arg5;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned int)arg7 destinationBytesPerRow:(unsigned int)arg8 destinationBytesPerImage:(unsigned int)arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toBuffer:(id)arg6 destinationOffset:(unsigned int)arg7 destinationBytesPerRow:(unsigned int)arg8 destinationBytesPerImage:(unsigned int)arg9 options:(unsigned int)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned int)arg2 sourceLevel:(unsigned int)arg3 sourceOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg4 sourceSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg5 toTexture:(id)arg6 destinationSlice:(unsigned int)arg7 destinationLevel:(unsigned int)arg8 destinationOrigin:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg9 options:(unsigned int)arg10;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 value:(unsigned char)arg3;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;

@end
