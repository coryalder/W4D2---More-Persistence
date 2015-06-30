//
//  ViewController.m
//  CoderExample
//
//  Created by Cory Alder on 2015-06-30.
//  Copyright (c) 2015 Cory Alder. All rights reserved.
//

#import "ViewController.h"
#import "Player.h"

@interface ViewController ()

@property (weak, nonatomic) IBOutlet UITextField *nameField;

@property (weak, nonatomic) IBOutlet UISlider *scoreSlider;

@property (nonatomic, strong) Player *player;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.player = [self loadPlayer];
    
    [self configureView];

    // Do any additional setup after loading the view, typically from a nib.
}


-(NSString *)filePath {
    NSString *path = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
    
    NSString *filePath = [path stringByAppendingPathComponent:@"player.data"];
    
    return filePath;
}

-(Player *)loadPlayer {
    
    return [[Player alloc] init];
//    
//    NSData *playerData = [NSData dataWithContentsOfFile:[self filePath]];
//    
//    Player *loaded = [NSKeyedUnarchiver unarchiveObjectWithData:playerData];
//    
//    if (!loaded) {
//        loaded = [[Player alloc] init];
//    }
//    
//    return loaded;
}

-(IBAction)savePlayer:(id)sender {
//    NSString *filePath = [self filePath];
//    [NSKeyedArchiver archiveRootObject:self.player toFile:filePath];
}

-(void)configureView {
    self.scoreSlider.value = self.player.score;
    self.nameField.text = self.player.name;
}

-(IBAction)updatePlayer:(id)sender {
    self.player.score = self.scoreSlider.value;
    self.player.name = self.nameField.text;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
