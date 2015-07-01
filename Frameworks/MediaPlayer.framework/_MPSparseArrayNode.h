/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPSparseArrayNode : NSObject <NSSecureCoding> {
    id _object;
    unsigned int _relativeOffset;
}

@property (nonatomic, retain) id object;
@property (nonatomic) unsigned int relativeOffset;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelativeOffset:(unsigned int)arg1 object:(id)arg2;
- (id)object;
- (unsigned int)relativeOffset;
- (void)setObject:(id)arg1;
- (void)setRelativeOffset:(unsigned int)arg1;

@end
