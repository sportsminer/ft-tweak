/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentApplication : PBCodable <NSCopying> {
    NSString * _applicationIdentifier;
    bool  _auxiliary;
    NSString * _displayName;
    NSString * _dpanIdentifier;
    NSString * _dpanSuffix;
    struct { 
        unsigned int inAppPINRequiredAmount : 1; 
        unsigned int inAppPriority : 1; 
        unsigned int paymentNetworkIdentifier : 1; 
        unsigned int paymentType : 1; 
        unsigned int state : 1; 
        unsigned int auxiliary : 1; 
        unsigned int inAppPINRequired : 1; 
        unsigned int supportsContactlessPayment : 1; 
        unsigned int supportsInAppPayment : 1; 
    }  _has;
    bool  _inAppPINRequired;
    long long  _inAppPINRequiredAmount;
    NSString * _inAppPINRequiredCurrency;
    long long  _inAppPriority;
    unsigned int  _paymentNetworkIdentifier;
    unsigned int  _paymentType;
    NSString * _sanitizedDpan;
    NSString * _secureElementIdenfitier;
    unsigned int  _state;
    bool  _supportsContactlessPayment;
    bool  _supportsInAppPayment;
    NSString * _suspendedReason;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic) bool auxiliary;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSString *dpanIdentifier;
@property (nonatomic, retain) NSString *dpanSuffix;
@property (nonatomic, readonly) bool hasApplicationIdentifier;
@property (nonatomic) bool hasAuxiliary;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly) bool hasDpanIdentifier;
@property (nonatomic, readonly) bool hasDpanSuffix;
@property (nonatomic) bool hasInAppPINRequired;
@property (nonatomic) bool hasInAppPINRequiredAmount;
@property (nonatomic, readonly) bool hasInAppPINRequiredCurrency;
@property (nonatomic) bool hasInAppPriority;
@property (nonatomic) bool hasPaymentNetworkIdentifier;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic, readonly) bool hasSanitizedDpan;
@property (nonatomic, readonly) bool hasSecureElementIdenfitier;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasSupportsContactlessPayment;
@property (nonatomic) bool hasSupportsInAppPayment;
@property (nonatomic, readonly) bool hasSuspendedReason;
@property (nonatomic) bool inAppPINRequired;
@property (nonatomic) long long inAppPINRequiredAmount;
@property (nonatomic, retain) NSString *inAppPINRequiredCurrency;
@property (nonatomic) long long inAppPriority;
@property (nonatomic) unsigned int paymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentType;
@property (nonatomic, retain) NSString *sanitizedDpan;
@property (nonatomic, retain) NSString *secureElementIdenfitier;
@property (nonatomic) unsigned int state;
@property (nonatomic) bool supportsContactlessPayment;
@property (nonatomic) bool supportsInAppPayment;
@property (nonatomic, retain) NSString *suspendedReason;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (bool)auxiliary;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)dpanIdentifier;
- (id)dpanSuffix;
- (bool)hasApplicationIdentifier;
- (bool)hasAuxiliary;
- (bool)hasDisplayName;
- (bool)hasDpanIdentifier;
- (bool)hasDpanSuffix;
- (bool)hasInAppPINRequired;
- (bool)hasInAppPINRequiredAmount;
- (bool)hasInAppPINRequiredCurrency;
- (bool)hasInAppPriority;
- (bool)hasPaymentNetworkIdentifier;
- (bool)hasPaymentType;
- (bool)hasSanitizedDpan;
- (bool)hasSecureElementIdenfitier;
- (bool)hasState;
- (bool)hasSupportsContactlessPayment;
- (bool)hasSupportsInAppPayment;
- (bool)hasSuspendedReason;
- (unsigned long long)hash;
- (bool)inAppPINRequired;
- (long long)inAppPINRequiredAmount;
- (id)inAppPINRequiredCurrency;
- (long long)inAppPriority;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)paymentNetworkIdentifier;
- (unsigned int)paymentType;
- (bool)readFrom:(id)arg1;
- (id)sanitizedDpan;
- (id)secureElementIdenfitier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAuxiliary:(bool)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setDpanIdentifier:(id)arg1;
- (void)setDpanSuffix:(id)arg1;
- (void)setHasAuxiliary:(bool)arg1;
- (void)setHasInAppPINRequired:(bool)arg1;
- (void)setHasInAppPINRequiredAmount:(bool)arg1;
- (void)setHasInAppPriority:(bool)arg1;
- (void)setHasPaymentNetworkIdentifier:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasSupportsContactlessPayment:(bool)arg1;
- (void)setHasSupportsInAppPayment:(bool)arg1;
- (void)setInAppPINRequired:(bool)arg1;
- (void)setInAppPINRequiredAmount:(long long)arg1;
- (void)setInAppPINRequiredCurrency:(id)arg1;
- (void)setInAppPriority:(long long)arg1;
- (void)setPaymentNetworkIdentifier:(unsigned int)arg1;
- (void)setPaymentType:(unsigned int)arg1;
- (void)setSanitizedDpan:(id)arg1;
- (void)setSecureElementIdenfitier:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setSupportsContactlessPayment:(bool)arg1;
- (void)setSupportsInAppPayment:(bool)arg1;
- (void)setSuspendedReason:(id)arg1;
- (unsigned int)state;
- (bool)supportsContactlessPayment;
- (bool)supportsInAppPayment;
- (id)suspendedReason;
- (void)writeTo:(id)arg1;

@end
