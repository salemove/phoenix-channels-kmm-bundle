#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PCCChannelErrorReason, PCCDefault, PCCEvent, PCCEvents, PCCKotlinArray<T>, PCCKotlinEnum<E>, PCCKotlinEnumCompanion, PCCPhoenix, PCCPushErrorReason, PCCPushErrorReasonCompanion, PCCSocketErrorReason, PCCTopic, PCCTopics;

@protocol PCCBackoffStrategy, PCCChannel, PCCChannelConfigurationBuilder, PCCChannelError, PCCKotlinComparable, PCCKotlinIterator, PCCPhoenixLogger, PCCPushConfigurationBuilder, PCCPushError, PCCSocket, PCCSocketConfiguration, PCCSocketConfigurationBuilder, PCCSocketError;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PCCBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PCCBase (PCCBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PCCMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PCCMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPCCKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PCCNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PCCByte : PCCNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PCCUByte : PCCNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PCCShort : PCCNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PCCUShort : PCCNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PCCInt : PCCNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PCCUInt : PCCNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PCCLong : PCCNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PCCULong : PCCNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PCCFloat : PCCNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PCCDouble : PCCNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PCCBoolean : PCCNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Phoenix")))
@interface PCCPhoenix : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phoenix __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCPhoenix *shared __attribute__((swift_name("shared")));

/**
 * Creates a new Phoenix Socket instance with the specified endpoint.
 *
 * @param endpoint The WebSocket endpoint to connect to.
 * @return A new Socket instance.
 */
- (id<PCCSocket>)SocketEndpoint:(NSString *)endpoint __attribute__((swift_name("Socket(endpoint:)")));

/**
 * Creates a new Phoenix Socket instance with the specified endpoint and configuration.
 *
 * @param endpoint The WebSocket endpoint to connect to.
 * @param configuration A builder to configure the socket settings.
 * @return A new Socket instance with the specified configuration.
 */
- (id<PCCSocket>)SocketEndpoint:(NSString *)endpoint configuration:(void (^)(id<PCCSocketConfigurationBuilder>))configuration __attribute__((swift_name("Socket(endpoint:configuration:)")));
@end

__attribute__((swift_name("PhoenixLogger")))
@protocol PCCPhoenixLogger
@required
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end

__attribute__((swift_name("BackoffStrategy")))
@protocol PCCBackoffStrategy
@required
- (int64_t)calculateDelayAttempt:(int32_t)attempt __attribute__((swift_name("calculateDelay(attempt:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExponentialBackoffStrategy")))
@interface PCCExponentialBackoffStrategy : PCCBase <PCCBackoffStrategy>
- (instancetype)initWithMaxDelayMs:(int64_t)maxDelayMs __attribute__((swift_name("init(maxDelayMs:)"))) __attribute__((objc_designated_initializer));
- (int64_t)calculateDelayAttempt:(int32_t)attempt __attribute__((swift_name("calculateDelay(attempt:)")));
@end


/**
 * The `Channel` interface represents a Phoenix Channel, a communication channel within the Phoenix Framework,
 * typically used for real-time, bidirectional communication over WebSockets.
 *
 * Phoenix Channels allow clients to join "topics" and exchange messages with the server and other clients
 * subscribed to the same topic. They are a core feature of Phoenix for building dynamic, collaborative,
 * and reactive applications.
 *
 * A Channel represents a logical connection to a specific topic on the server. Clients can join a channel,
 * listen for messages (events) on that channel, and push messages to the server, which can then be broadcast
 * to other clients or processed by server-side code.
 */
__attribute__((swift_name("Channel")))
@protocol PCCChannel
@required

/**
 * Joins the channel, subscribing the client to the topic on the server.
 * implementation of [join] with [SocketConfiguration.responseTimeoutMs] timeout.
 *
 * This call is allowed once per channel instance.
 */
- (void)join __attribute__((swift_name("join()")));

/**
 * Joins the channel, subscribing the client to the topic on the server.
 *
 * @param timeoutMs The time in milliseconds to wait for the join to complete.
 *
 * This call is allowed once per channel instance.
 */
- (void)joinTimeoutMs:(int64_t)timeoutMs __attribute__((swift_name("join(timeoutMs:)")));

/**
 * Leaves the channel, unsubscribing the client from the topic on the server.
 * implementation of [leave] with [SocketConfiguration.responseTimeoutMs] timeout.
 *
 * Triggers onClose callback.
 */
- (void)leave __attribute__((swift_name("leave()")));

/**
 * Leaves the channel, unsubscribing the client from the topic on the server.
 *
 * @param timeoutMs The time in milliseconds to wait for the leave to complete.
 */
- (void)leaveTimeoutMs:(int64_t)timeoutMs __attribute__((swift_name("leave(timeoutMs:)")));

/**
 * Unregisters callback for the specified event on this channel.
 *
 * @param event The event to stop listening for.
 */
- (void)offEvent:(PCCEvent *)event __attribute__((swift_name("off(event:)")));

/**
 * Unregisters callback for the specified event and ref on this channel.
 *
 * @param event The event to stop listening for.
 * @param ref The callback ref.
 */
- (void)offEvent:(PCCEvent *)event ref:(NSString *)ref __attribute__((swift_name("off(event:ref:)")));

/**
 * Registers a callback to be invoked when a message with the specified event is received on this channel.
 *
 * @param event The event to listen for.
 * @param onEvent The callback to invoke when a message with the specified event is received.
 *
 * @return A unique identifier for the registered callback.
 */
- (NSString *)onEvent:(PCCEvent *)event onEvent:(void (^)(NSString *))onEvent __attribute__((swift_name("on(event:onEvent:)")));

/**
 * Sets the channel close(leave) callback.
 * Will be called when the channel is closed by the server or left by the client.
 */
- (void)onCloseCallback:(void (^)(NSString * _Nullable))callback __attribute__((swift_name("onClose(callback:)")));

/**
 * Sets the channel error callback.
 * Timeout during join, leave, or any other error.
 */
- (void)onErrorCallback:(void (^)(id<PCCChannelError>))callback __attribute__((swift_name("onError(callback:)")));

/**
 * Sets the channel open(join) callback.
 */
- (void)onOpenCallback:(void (^)(void))callback __attribute__((swift_name("onOpen(callback:)")));

/**
 * Pushes a message to the server on this channel.
 * implementation of [push] with [SocketConfiguration.responseTimeoutMs] timeout.
 *
 * @param event The event to push.
 * @param payloadJson The payload to send with the event.
 */
- (void)pushEvent:(PCCEvent *)event payloadJson:(NSString *)payloadJson __attribute__((swift_name("push(event:payloadJson:)")));

/**
 * Pushes a message to the server on this channel.
 *
 * @param event The event to push.
 * @param payloadJson The payload to send with the event.
 * @param builder The configuration builder for the push.
 */
- (void)pushEvent:(PCCEvent *)event payloadJson:(NSString *)payloadJson builder:(void (^)(id<PCCPushConfigurationBuilder>))builder __attribute__((swift_name("push(event:payloadJson:builder:)")));

/**
 * Indicates whether the channel is currently closed or left.
 */
@property (readonly) BOOL isClosed __attribute__((swift_name("isClosed")));

/**
 * Indicates whether the channel has encountered an error.
 */
@property (readonly) BOOL isErrored __attribute__((swift_name("isErrored")));

/**
 * Indicates whether the channel is currently joined and active.
 */
@property (readonly) BOOL isJoined __attribute__((swift_name("isJoined")));

/**
 * Indicates whether the channel is currently in the process of joining.
 */
@property (readonly) BOOL isJoining __attribute__((swift_name("isJoining")));

/**
 * Indicates whether the channel is currently in the process of leaving.
 */
@property (readonly) BOOL isLeaving __attribute__((swift_name("isLeaving")));
@property (readonly) NSString * _Nullable payload __attribute__((swift_name("payload")));

/**
 * The topic associated with this channel.
 */
@property (readonly) PCCTopic *topic __attribute__((swift_name("topic")));
@end


/**
 * Builder for the Phoenix channel configuration.
 */
__attribute__((swift_name("ChannelConfigurationBuilder")))
@protocol PCCChannelConfigurationBuilder
@required

/**
 * Sets the payload for joining channel.
 */
- (void)payloadPayload:(NSString *)payload __attribute__((swift_name("payload(payload:)")));

/**
 * Sets the response timeout in milliseconds for join - `phx_join` and leave - `phx_leave` events.
 */
- (void)timeoutMsTimeoutMs:(int64_t)timeoutMs __attribute__((swift_name("timeoutMs(timeoutMs:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Default")))
@interface PCCDefault : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCDefault *shared __attribute__((swift_name("shared")));

/**
 * Default values for the socket heartbeat interval.
 */
@property (readonly) int64_t HEARTBEAT_INTERVAL __attribute__((swift_name("HEARTBEAT_INTERVAL")));

/**
 * Default values for the socket response timeout.
 */
@property (readonly) int64_t RESPONSE_TIMEOUT __attribute__((swift_name("RESPONSE_TIMEOUT")));

/**
 * Default values for the socket VSN.
 */
@property (readonly) NSString *VSN __attribute__((swift_name("VSN")));
@property (readonly) NSString *WEBSOCKET_PATH __attribute__((swift_name("WEBSOCKET_PATH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface PCCEvent : PCCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PCCEvent *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Events")))
@interface PCCEvents : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)events __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCEvents *shared __attribute__((swift_name("shared")));
@property (readonly) PCCEvent *close __attribute__((swift_name("close")));
@property (readonly) PCCEvent *error __attribute__((swift_name("error")));
@property (readonly) PCCEvent *heartbeat __attribute__((swift_name("heartbeat")));
@property (readonly) PCCEvent *join __attribute__((swift_name("join")));
@property (readonly) PCCEvent *leave __attribute__((swift_name("leave")));
@property (readonly) PCCEvent *reply __attribute__((swift_name("reply")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Topic")))
@interface PCCTopic : PCCBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PCCTopic *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Topics")))
@interface PCCTopics : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)topics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCTopics *shared __attribute__((swift_name("shared")));
@property (readonly) PCCTopic *phoenix __attribute__((swift_name("phoenix")));
@end

__attribute__((swift_name("ChannelError")))
@protocol PCCChannelError
@required
@property (readonly) NSString * _Nullable payload __attribute__((swift_name("payload")));
@property (readonly) PCCChannelErrorReason *reason __attribute__((swift_name("reason")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PCCKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PCCKotlinEnum<E> : PCCBase <PCCKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PCCKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelErrorReason")))
@interface PCCChannelErrorReason : PCCKotlinEnum<PCCChannelErrorReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PCCChannelErrorReason *joinTimeout __attribute__((swift_name("joinTimeout")));
@property (class, readonly) PCCChannelErrorReason *leaveTimeout __attribute__((swift_name("leaveTimeout")));
@property (class, readonly) PCCChannelErrorReason *socketError __attribute__((swift_name("socketError")));
@property (class, readonly) PCCChannelErrorReason *error __attribute__((swift_name("error")));
@property (class, readonly) PCCChannelErrorReason *duplicateJoinCall __attribute__((swift_name("duplicateJoinCall")));
+ (PCCKotlinArray<PCCChannelErrorReason *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PCCChannelErrorReason *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PushError")))
@protocol PCCPushError
@required
@property (readonly) PCCPushErrorReason *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PushErrorReason")))
@interface PCCPushErrorReason : PCCKotlinEnum<PCCPushErrorReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PCCPushErrorReasonCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PCCPushErrorReason *pushTimeout __attribute__((swift_name("pushTimeout")));
@property (class, readonly) PCCPushErrorReason *channelClosed __attribute__((swift_name("channelClosed")));
@property (class, readonly) PCCPushErrorReason *channelIsNotJoined __attribute__((swift_name("channelIsNotJoined")));
+ (PCCKotlinArray<PCCPushErrorReason *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PCCPushErrorReason *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PushErrorReason.Companion")))
@interface PCCPushErrorReasonCompanion : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCPushErrorReasonCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SocketError")))
@protocol PCCSocketError
@required
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) PCCSocketErrorReason *reason __attribute__((swift_name("reason")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SocketErrorReason")))
@interface PCCSocketErrorReason : PCCKotlinEnum<PCCSocketErrorReason *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PCCSocketErrorReason *failedToConnect __attribute__((swift_name("failedToConnect")));
@property (class, readonly) PCCSocketErrorReason *failedToReconnect __attribute__((swift_name("failedToReconnect")));
@property (class, readonly) PCCSocketErrorReason *connectionDisrupted __attribute__((swift_name("connectionDisrupted")));
@property (class, readonly) PCCSocketErrorReason *heartbeatTimeout __attribute__((swift_name("heartbeatTimeout")));
+ (PCCKotlinArray<PCCSocketErrorReason *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<PCCSocketErrorReason *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("PushConfigurationBuilder")))
@protocol PCCPushConfigurationBuilder
@required

/**
 * Sets the callback to be called when the push fails
 * This callback will be called when the timeout happens
 */
- (void)onErrorCallback_:(void (^)(id<PCCPushError>))callback __attribute__((swift_name("onError(callback_:)")));

/**
 * Sets the callback to be called when the push is successful
 */
- (void)onSuccessCallback:(void (^)(void))callback __attribute__((swift_name("onSuccess(callback:)")));

/**
 * Sets the timeout for the push
 * By default the Channels response timeout will be used set by
 * [com.glia.phoenix.channels.client.channel.ChannelBuilder.timeoutMs]
 */
- (void)timeoutMsTimeout:(int64_t)timeout __attribute__((swift_name("timeoutMs(timeout:)")));
@end


/**
 * Socket interface for a Phoenix client.
 *
 * This interface represents a connection to a Phoenix real-time server. It provides methods for:
 * - Establishing and closing the connection.
 * - Subscribing to connection lifecycle events (open, close, error).
 * - Creating channels for interacting with specific topics on the server.
 * - Sending and receiving messages over the established connection.
 *
 * @see Channel
 * @see Topic
 * @see Params
 */
__attribute__((swift_name("Socket")))
@protocol PCCSocket
@required

/**
 * Creates a new channel for the specified topic or retrieves an existing channel if one already exists.
 *
 * @param topic The topic for the channel.
 */
- (id<PCCChannel>)channelTopic:(PCCTopic *)topic __attribute__((swift_name("channel(topic:)")));

/**
 * Creates a new channel for the specified topic or retrieves an existing channel if one already exists.
 *
 * @param topic The topic for the channel.
 * @param builder The builder for the channel.
 */
- (id<PCCChannel>)channelTopic:(PCCTopic *)topic builder:(void (^)(id<PCCChannelConfigurationBuilder>))builder __attribute__((swift_name("channel(topic:builder:)")));

/**
 * Connects to the Phoenix server.
 */
- (void)connect __attribute__((swift_name("connect()")));

/**
 * Disconnects from the Phoenix server.
 */
- (void)disconnect __attribute__((swift_name("disconnect()")));

/**
 * Sets the connection close callback.
 */
- (void)onCloseCallback_:(void (^)(void))callback __attribute__((swift_name("onClose(callback_:)")));

/**
 * Sets the connection error callback.
 */
- (void)onErrorCallback__:(void (^)(id<PCCSocketError>))callback __attribute__((swift_name("onError(callback__:)")));

/**
 * Sets the connection open callback.
 */
- (void)onOpenCallback:(void (^)(void))callback __attribute__((swift_name("onOpen(callback:)")));

/**
 * Releases all the resources related to the [channel]
 * This function does not sent the `leave` signal to the server, it only releases the resources.
 * To leave the channel explicitly call the [Channel.leave] function.
 * @param channel The channel to release
 */
- (void)releaseChannelChannel:(id<PCCChannel>)channel __attribute__((swift_name("releaseChannel(channel:)")));

/**
 * Removes all callbacks from the socket.
 */
- (void)removeCallbacks __attribute__((swift_name("removeCallbacks()")));

/**
 * Current configuration used by the socket.
 */
@property (readonly) id<PCCSocketConfiguration> configuration __attribute__((swift_name("configuration")));

/**
 * Indicates whether the socket is currently connected to the server.
 */
@property (readonly) BOOL isConnected __attribute__((swift_name("isConnected")));
@end


/**
 * Configuration for the Phoenix client.
 */
__attribute__((swift_name("SocketConfiguration")))
@protocol PCCSocketConfiguration
@required
@property (readonly) NSString *endpoint __attribute__((swift_name("endpoint")));
@property (readonly) int64_t heartBeatIntervalMs __attribute__((swift_name("heartBeatIntervalMs")));
@property (readonly) id<PCCPhoenixLogger> _Nullable logger __attribute__((swift_name("logger")));
@property (readonly) NSDictionary<NSString *, NSString *> *(^params)(void) __attribute__((swift_name("params")));
@property (readonly) id<PCCBackoffStrategy> reconnectStrategy __attribute__((swift_name("reconnectStrategy")));
@property (readonly) id<PCCBackoffStrategy> rejoinStrategy __attribute__((swift_name("rejoinStrategy")));
@property (readonly) int64_t responseTimeoutMs __attribute__((swift_name("responseTimeoutMs")));
@property (readonly) NSString *vsn __attribute__((swift_name("vsn")));
@end


/**
 * Configuration builder for the Phoenix client.
 */
__attribute__((swift_name("SocketConfigurationBuilder")))
@protocol PCCSocketConfigurationBuilder
@required

/**
 * Sets the heartbeat interval for the client.
 * If not set the [Default.HEARTBEAT_INTERVAL] will be used.
 */
- (void)heartBeatIntervalMsHeartBeatIntervalMs:(int64_t)heartBeatIntervalMs __attribute__((swift_name("heartBeatIntervalMs(heartBeatIntervalMs:)")));

/**
 * Sets the logger for the client.
 */
- (void)loggerLogger:(id<PCCPhoenixLogger>)logger __attribute__((swift_name("logger(logger:)")));

/**
 * Sets the params for the client.
 * If not set an empty map will be used.
 */
- (void)paramsParams:(NSDictionary<NSString *, NSString *> *(^)(void))params __attribute__((swift_name("params(params:)")));

/**
 * Sets the reconnect strategy for the client.
 * if not set an [ExponentialBackoffStrategy] will be used.
 */
- (void)reconnectStrategyBackoffStrategy:(id<PCCBackoffStrategy>)backoffStrategy __attribute__((swift_name("reconnectStrategy(backoffStrategy:)")));

/**
 * Sets the rejoin strategy for the [Channel].
 * if not set an [ExponentialBackoffStrategy] will be used.
 */
- (void)rejoinStrategyBackoffStrategy:(id<PCCBackoffStrategy>)backoffStrategy __attribute__((swift_name("rejoinStrategy(backoffStrategy:)")));

/**
 * Sets the response timeout for the client.
 * If not set the [Default.RESPONSE_TIMEOUT] will be used.
 */
- (void)responseTimeoutMsResponseTimeoutMs:(int64_t)responseTimeoutMs __attribute__((swift_name("responseTimeoutMs(responseTimeoutMs:)")));

/**
 * Sets the VSN for the client.
 * If not set the [Default.VSN] will be used.
 */
- (void)vsnVsn:(NSString *)vsn __attribute__((swift_name("vsn(vsn:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PCCKotlinEnumCompanion : PCCBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PCCKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PCCKotlinArray<T> : PCCBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PCCInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PCCKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PCCKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
