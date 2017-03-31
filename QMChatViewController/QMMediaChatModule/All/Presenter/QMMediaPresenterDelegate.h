//
//  QMMediaPresenterDelegate.h
//  QMPLayer
//
//  Created by Vitaliy Gurkovsky on 1/30/17.
//  Copyright © 2017 quickblox. All rights reserved.
//

#import <Foundation/Foundation.h>

@class QBChatMessage;

@protocol QMMediaViewDelegate;
@protocol QMPlayerService;
@protocol QMMediaAssistant;
@protocol QMEventHandler;

@protocol QMMediaPresenterDelegate <NSObject>

@property (weak, nonatomic) id <QMMediaViewDelegate> view;
@property (weak, nonatomic) id <QMPlayerService> playerService;
@property (weak, nonatomic) id <QMMediaAssistant> mediaAssistant;
@property (weak, nonatomic) id <QMEventHandler> eventHandler;

- (instancetype)initWithView:(id<QMMediaViewDelegate>)view;

- (void)activateMedia;
- (void)updateProgress:(CGFloat)progress;
- (void)setNeedsToUpdateLayout;


@end
