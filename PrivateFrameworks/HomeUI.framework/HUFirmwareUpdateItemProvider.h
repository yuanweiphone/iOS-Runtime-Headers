/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUFirmwareUpdateItemProvider : HFItemProvider {
    id /* block */  _filter;
    BOOL  _hasProvidedInstructionsItem;
    NSString * _instructionsDescription;
    BOOL  _instructionsHidden;
    HUInstructionsItem * _instructionsItem;
    NSString * _instructionsTitle;
    HULinkedApplicationItemProvider * _linkedApplicationItemProvider;
    NSSet * _linkedApplicationItems;
    unsigned int  _style;
}

@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic) BOOL hasProvidedInstructionsItem;
@property (nonatomic, retain) NSString *instructionsDescription;
@property (nonatomic) BOOL instructionsHidden;
@property (nonatomic, retain) HUInstructionsItem *instructionsItem;
@property (nonatomic, retain) NSString *instructionsTitle;
@property (nonatomic, retain) HULinkedApplicationItemProvider *linkedApplicationItemProvider;
@property (nonatomic, retain) NSSet *linkedApplicationItems;
@property (nonatomic, readonly) unsigned int style;

+ (id /* block */)itemComparator;
+ (BOOL)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id /* block */)_effectiveFilter;
- (id)_instructionsItemResultsWithSampleLinkedApplicationItem:(id)arg1 numberOfLinkedApplicationItems:(int)arg2;
- (id /* block */)filter;
- (BOOL)hasProvidedInstructionsItem;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 style:(unsigned int)arg2;
- (id)instructionsDescription;
- (BOOL)instructionsHidden;
- (id)instructionsItem;
- (id)instructionsTitle;
- (id)invalidationReasons;
- (id)items;
- (id)linkedApplicationItemProvider;
- (id)linkedApplicationItems;
- (id)reloadItems;
- (void)setFilter:(id /* block */)arg1;
- (void)setHasProvidedInstructionsItem:(BOOL)arg1;
- (void)setInstructionsDescription:(id)arg1;
- (void)setInstructionsHidden:(BOOL)arg1;
- (void)setInstructionsItem:(id)arg1;
- (void)setInstructionsTitle:(id)arg1;
- (void)setLinkedApplicationItemProvider:(id)arg1;
- (void)setLinkedApplicationItems:(id)arg1;
- (unsigned int)style;

@end
