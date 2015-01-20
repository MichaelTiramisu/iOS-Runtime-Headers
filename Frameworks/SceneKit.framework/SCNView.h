/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class <SCNSceneRendererDelegate>, EAGLContext, NSArray, NSRecursiveLock, NSString, SCNDisplayLink, SCNEventHandler, SCNJitterer, SCNNode, SCNRenderer, SCNScene, SCNSpriteKitEventHandler, SCNTechnique, SKScene, UIColor;

@interface SCNView : UIView <SCNSceneRenderer, SCNTechniqueSupport> {
    unsigned int _ibNoMultisampling : 1;
    unsigned int _allowsBrowsing : 1;
    unsigned int _isOpaque : 1;
    unsigned int _firstDrawDone : 1;
    unsigned int _appIsDeactivated : 1;
    unsigned int _viewIsOffscreen : 1;
    SCNDisplayLink *__displayLink;
    NSString *__ibSceneName;
    UIColor *_backgroundColor;
    NSArray *_controllerGestureRecognizers;
    double _currentSystemTime;
    id _delegate;
    SCNEventHandler *_eventHandler;
    SCNJitterer *_jitterer;
    NSRecursiveLock *_lock;
    SCNRenderer *_renderer;
    SCNScene *_scene;
    char *_snapshotImageData;
    unsigned long long _snapshotImageDataLength;
    SCNSpriteKitEventHandler *_spriteKitEventHandler;
}

@property bool allowsCameraControl;
@property unsigned long long antialiasingMode;
@property bool autoenablesDefaultLighting;
@property(readonly) void* context;
@property(copy,readonly) NSString * debugDescription;
@property <SCNSceneRendererDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(retain) EAGLContext * eaglContext;
@property(readonly) unsigned long long hash;
@property(getter=isJitteringEnabled) bool jitteringEnabled;
@property bool loops;
@property(retain) SKScene * overlaySKScene;
@property(getter=isPlaying) bool playing;
@property(retain) SCNNode * pointOfView;
@property long long preferredFramesPerSecond;
@property(retain) SCNScene * scene;
@property double sceneTime;
@property bool showsStatistics;
@property(readonly) Class superclass;
@property(copy) SCNTechnique * technique;

+ (id)SCNJSExportProtocol;
+ (id)_kvoKeysForwardedToRenderer;
+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (Class)layerClass;

- (void*)__CFObject;
- (id)_authoringEnvironment;
- (bool)_canJitter;
- (void)_checkAndUpdateDisplayLinkStateIfNeeded;
- (void)_commonInit:(id)arg1;
- (id)_displayLink;
- (void)_drawAtTime:(double)arg1;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (double)_flipY:(double)arg1;
- (void)_flushDisplayLink;
- (id)_ibSceneName;
- (bool)_ibWantsMultisampling;
- (void)_jitterRedisplay;
- (void)_sceneDidUpdate:(id)arg1;
- (void)_setGestureRecognizers:(id)arg1;
- (void)_setNeedsDisplay;
- (bool)_showsAuthoringEnvironment;
- (bool)_supportsJiterringSyncRedraw;
- (void)_systemTimeAnimationStarted:(id)arg1;
- (void)_updateGestureRecognizers;
- (bool)allowsCameraControl;
- (unsigned long long)antialiasingMode;
- (bool)autoenablesDefaultLighting;
- (id)backgroundColor;
- (void*)context;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)didMoveToWindow;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)eaglContext;
- (void)encodeWithCoder:(id)arg1;
- (id)eventHandler;
- (void)eventHandlerWantsRedraw;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isJitteringEnabled;
- (bool)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
- (bool)isOpaque;
- (bool)isPlaying;
- (void)lock;
- (bool)loops;
- (id)overlaySKScene;
- (void)pause:(id)arg1;
- (void)pauseDisplayLink;
- (void)play:(id)arg1;
- (id)pointOfView;
- (long long)preferredFramesPerSecond;
- (bool)prepareObject:(id)arg1 shouldAbortBlock:(id)arg2;
- (void)prepareObjects:(id)arg1 withCompletionHandler:(id)arg2;
- (struct SCNVector3 { float x1; float x2; float x3; })projectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (id)renderer;
- (void)resumeDisplayLink;
- (id)scene;
- (double)sceneTime;
- (void)setAllowsCameraControl:(bool)arg1;
- (void)setAntialiasingMode:(unsigned long long)arg1;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEaglContext:(id)arg1;
- (void)setEventHandler:(id)arg1;
- (void)setJitteringEnabled:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setOverlaySKScene:(id)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfView:(id)arg1 animate:(bool)arg2;
- (void)setPointOfView:(id)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setScene:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setShowsStatistics:(bool)arg1;
- (void)setTechnique:(id)arg1;
- (void)set_ibSceneName:(id)arg1;
- (void)set_ibWantsMultisampling:(bool)arg1;
- (void)set_showsAuthoringEnvironment:(bool)arg1;
- (bool)showsStatistics;
- (struct UIImage { Class x1; void *x2; double x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 3; unsigned int x_4_1_3 : 1; unsigned int x_4_1_4 : 1; unsigned int x_4_1_5 : 1; unsigned int x_4_1_6 : 2; unsigned int x_4_1_7 : 1; unsigned int x_4_1_8 : 1; } x4; }*)snapshot;
- (void)stop:(id)arg1;
- (void)switchToCameraNamed:(id)arg1;
- (void)switchToNextCamera;
- (id)technique;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)unlock;
- (struct SCNVector3 { float x1; float x2; float x3; })unprojectPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)willMoveToWindow:(id)arg1;

@end