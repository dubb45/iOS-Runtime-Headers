/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

@interface _RWITCPRelayMessage : NSObject {
    NSData * _payload;
    BOOL  _writtenHeader;
    unsigned int  _writtenPayloadOffset;
}

@property (nonatomic, readonly) unsigned int length;
@property (nonatomic, readonly, copy) NSData *payload;

+ (id)TCPRelayMessageFromDataStream:(id)arg1 error:(id*)arg2;
+ (id)TCPRelayMessageWithPayload:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1;
- (unsigned int)length;
- (id)payload;
- (int)write:(int)arg1;

@end
