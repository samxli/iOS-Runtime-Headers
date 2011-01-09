/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSMutableArray, NSIndexPath, SUItemList;



@interface SUItemListDataSource : SUTableDataSource 
{
    NSMutableArray *_cachedHeaderViews;
    NSIndexPath *_loadMoreIndexPath;
    SUItemList *_itemList;
    float _priceButtonWidth;
    NSInteger _style;
}

@property NSInteger style;
@property(retain) NSIndexPath *loadMoreIndexPath;
@property(retain) SUItemList *itemList;


- (void)dealloc;
- (BOOL)canShowPriceButtonForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 reuseIdentifier:(id*)arg2;
- (Class)cellConfigurationClassForItem:(id)arg1;
- (id)cellConfigurationForIndex:(NSInteger)arg1 item:(id)arg2;
- (id)createHeaderViewForSection:(NSInteger)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (id)headerViewForSection:(NSInteger)arg1;
- (NSInteger)numberOfSections;
- (NSInteger)numberOfItemsInSection:(NSInteger)arg1;
- (void)reloadCellContexts;
- (void)reloadData;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (void)_configureLoadMoreCell:(id)arg1 forIndexPath:(id)arg2;
- (id)_priceButtonForCell:(id)arg1 item:(id)arg2;
- (BOOL)_shouldShowPriceButtonForItem:(id)arg1;
- (NSInteger)style;
- (void)setStyle:(NSInteger)arg1;
- (id)loadMoreIndexPath;
- (void)setLoadMoreIndexPath:(id)arg1;
- (id)itemList;
- (void)setItemList:(id)arg1;

@end
