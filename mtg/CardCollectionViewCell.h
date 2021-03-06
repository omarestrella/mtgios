//
//  CardCollectionViewCell.h
//  mtg
//
//  Created by Omar Estrella on 1/3/15.
//  Copyright (c) 2015 Omar Estrella. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CardsCollectionViewController;

@interface CardCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) NSDictionary *card;

- (void)setupCellAtIndexPath:(NSIndexPath *)indexPath forSet:(NSDictionary *)set card:(NSDictionary *)card;

@end
