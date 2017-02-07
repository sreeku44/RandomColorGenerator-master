//
//  RandomColorGenerator.h
//  RandomColorGenerator
//
//  Created by Mohammad Azam on 10/3/16.
//  Copyright © 2016 Mohammad Azam. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol RandomColorGeneratorDelegate <NSObject>

-(void) randomColor :(UIColor*) color;

@end
@interface RandomColorGenerator : NSObject{
    
    id <RandomColorGeneratorDelegate> _deligate;
    
}

@property (nonatomic,weak) id<RandomColorGeneratorDelegate> delegate;

-(void) generate;

@end



// create a protocol called RandomColorGeneratorDelegate
// create a method in protocol randomColor with a single parameter UIColor as shown below

//-(void) randomColor:(UIColor *) color;

