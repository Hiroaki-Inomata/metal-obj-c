//
//  PHRenderer.h
//  HelloTriangle2
//
//  Created by hiroaki-inomata on 2024/11/13.
//

#import <MetalKit/MetalKit.h>

@interface PHRenderer : NSObject<MTKViewDelegate>

- (nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)mtkView;

@end
