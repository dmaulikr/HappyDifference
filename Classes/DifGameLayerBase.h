//
//  DifGameLayerBase.h
//  HappyDifference
//
//  Created by zzyy on 11-12-27.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//
@interface CCAnimation(Helper)
+(CCAnimation*) animationWithFile:(NSString*)name frameCount:(int)frameCount delay:(float)delay;
@end

enum CDifGameLayerBase_tag_name
{
    tag_pbar,
}CDifGameLayerBase_tag_name;

@interface DifGameLayerBase : CCLayer {
    
    int                m_itotalStage;
    int                m_itotalLevel;
    int                m_iCurStage;
    int                m_iCurLevel;
    int                m_orgImageWith;
    int                m_midLength;
    
    CGRect             m_touchRectLeft;
    CGRect             m_touchRectright;
    
    NSMutableArray*    m_answersPointAry;
    
    NSMutableArray*    m_starIcon;
    int                m_openStarNum;
    
    int                m_barPercent;

    NSString*           m_levelFolderRoot;
    CCLayerColor*       m_maskedReadyGoLayer;
}
-(id) initWithStage:(int)iStage andLevel:(int) iLevel;
-(id) initWithReadyGo:(int) iCurStage andLevel:(int) iLevel;

@property(assign) int  m_iCurStage;
@property(assign) int  m_iCurLevel;
@end
