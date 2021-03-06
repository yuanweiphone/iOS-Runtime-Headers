/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@interface JSONHTTPRequest : NSObject <NSURLConnectionDelegate> {
    int  _HTTPMethod;
    NSString * _HTTPRequestBoundary;
    BOOL  _allowsCellularAccess;
    NSURLConnection * _connection;
    <JSONHTTPRequestDelegate> * _delegate;
    NSDictionary * _getParams;
    NSData * _overridePostBody;
    NSDictionary * _postParams;
    NSMutableData * _rawData;
    BOOL  _receivedValidResponse;
    NSMutableURLRequest * _request;
    NSHTTPURLResponse * _response;
    int  _responseType;
    OAURLRequestSigner * _signer;
    BOOL  _signsMultipartPOSTData;
    NSDictionary * _unsignedPostParams;
}

@property (nonatomic) int HTTPMethod;
@property (nonatomic) BOOL allowsCellularAccess;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *getParams;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *postParams;
@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic) int responseType;
@property (nonatomic) BOOL signsMultipartPOSTData;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *unsignedPostParams;

+ (id)encodedStringForParameterDictionary:(id)arg1;

- (void).cxx_destruct;
- (int)HTTPMethod;
- (id)HTTPRequestBoundary;
- (id)_multipartParamData:(id)arg1;
- (BOOL)allowsCellularAccess;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)getParams;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 signer:(id)arg3;
- (id)postParams;
- (id)response;
- (int)responseType;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setGetParams:(id)arg1;
- (void)setHTTPHeader:(id)arg1 value:(id)arg2;
- (void)setHTTPMethod:(int)arg1;
- (void)setOverridePostBody:(id)arg1;
- (void)setPostParams:(id)arg1;
- (void)setResponseType:(int)arg1;
- (void)setSignsMultipartPOSTData:(BOOL)arg1;
- (void)setUnsignedPostParams:(id)arg1;
- (BOOL)signsMultipartPOSTData;
- (void)start;
- (id)unsignedPostParams;

@end
