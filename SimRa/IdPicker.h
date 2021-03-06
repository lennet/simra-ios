//
//  IdPicker.h
//  simra
//
//  Created by Christoph Krey on 28.03.19.
//  Copyright © 2019 Mobile Cloud Computing an der Fakultät IV (Elektrotechnik und Informatik) der TU Berlin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IdPicker : UITextField <UIPickerViewDataSource, UIPickerViewDelegate>
@property (strong, nonatomic) NSArray <NSString *> *array;
@property (nonatomic) NSInteger arrayIndex;

@end

NS_ASSUME_NONNULL_END

