/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddressEditorViewController : UITableViewController <MKLocalSearchCompleterDelegate, PKAddressTextFieldDelegate, PKCountryPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    CNPostalAddressFormattingSpecification * _addressFormatter;
    PKAddressTextField * _currentlySelectedField;
    <PKAddressEditorViewControllerDelegate> * _delegate;
    bool  _displayGivenNameFirst;
    bool  _displayPhoneticName;
    NSArray * _editingFields;
    NSArray * _errors;
    NSString * _familyName;
    PKAddressTextField * _familyNameTextField;
    PKAddressTextField * _firstTextFieldForName;
    NSString * _givenName;
    PKAddressTextField * _givenNameTextField;
    NSArray * _highlightedFieldKeys;
    CNMutablePostalAddress * _inputAddress;
    NSString * _inputLabel;
    CNMutablePostalAddress * _originalAddress;
    NSString * _originalFamilyName;
    NSString * _originalGivenName;
    NSString * _originalPhoneticFamilyName;
    NSString * _originalPhoneticGivenName;
    NSString * _phoneticFamilyName;
    PKAddressTextField * _phoneticFamilyNameTextField;
    NSString * _phoneticGivenName;
    PKAddressTextField * _phoneticGivenNameTextField;
    bool  _preselectedNameField;
    bool  _readOnly;
    NSArray * _requiredFieldKeys;
    bool  _requirementsMet;
    MKLocalSearchCompleter * _searchCompleter;
    long long  _style;
    NSArray * _suggestions;
}

@property (nonatomic, retain) CNPostalAddressFormattingSpecification *addressFormatter;
@property (nonatomic, retain) PKAddressTextField *currentlySelectedField;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKAddressEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *editingFields;
@property (nonatomic, retain) NSArray *errors;
@property (nonatomic, retain) NSString *familyName;
@property (nonatomic) PKAddressTextField *familyNameTextField;
@property (nonatomic, retain) PKAddressTextField *firstTextFieldForName;
@property (nonatomic, retain) NSString *givenName;
@property (nonatomic) PKAddressTextField *givenNameTextField;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *highlightedFieldKeys;
@property (nonatomic, retain) CNMutablePostalAddress *inputAddress;
@property (nonatomic, retain) NSString *inputLabel;
@property (nonatomic, retain) CNMutablePostalAddress *originalAddress;
@property (nonatomic, retain) NSString *originalFamilyName;
@property (nonatomic, retain) NSString *originalGivenName;
@property (nonatomic, retain) NSString *originalPhoneticFamilyName;
@property (nonatomic, retain) NSString *originalPhoneticGivenName;
@property (nonatomic, retain) NSString *phoneticFamilyName;
@property (nonatomic) PKAddressTextField *phoneticFamilyNameTextField;
@property (nonatomic, retain) NSString *phoneticGivenName;
@property (nonatomic) PKAddressTextField *phoneticGivenNameTextField;
@property (nonatomic) bool readOnly;
@property (nonatomic, retain) NSArray *requiredFieldKeys;
@property (nonatomic) bool requirementsMet;
@property (nonatomic, retain) MKLocalSearchCompleter *searchCompleter;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSArray *suggestions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_fieldIndexForNameComponent:(unsigned long long)arg1;
- (unsigned long long)_nameComponentForFieldIndex:(unsigned long long)arg1;
- (void)_showCountryPicker;
- (void)_updateWithPostalAddress:(id)arg1;
- (void)_validateAddressRequirements;
- (id)addressFormatter;
- (void)addressTextField:(id)arg1 textDidChange:(id)arg2;
- (void)assignErrorToField:(id)arg1;
- (void)cancel;
- (void)completer:(id)arg1 didFailWithError:(id)arg2;
- (void)completerDidUpdateResults:(id)arg1;
- (void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2;
- (id)currentlySelectedField;
- (id)delegate;
- (void)donePressed;
- (id)editingFields;
- (id)errors;
- (id)familyName;
- (id)familyNameTextField;
- (id)firstTextFieldForName;
- (id)givenName;
- (id)givenNameTextField;
- (id)highlightedFieldKeys;
- (id)initWithContact:(id)arg1 requiredKeys:(id)arg2 highlightedKeys:(id)arg3 errors:(id)arg4 style:(long long)arg5;
- (id)initWithContact:(id)arg1 style:(long long)arg2;
- (id)inputAddress;
- (id)inputLabel;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)originalAddress;
- (id)originalFamilyName;
- (id)originalGivenName;
- (id)originalPhoneticFamilyName;
- (id)originalPhoneticGivenName;
- (id)phoneticFamilyName;
- (id)phoneticFamilyNameTextField;
- (id)phoneticGivenName;
- (id)phoneticGivenNameTextField;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (bool)readOnly;
- (void)recomputeEditingFields;
- (id)requiredFieldKeys;
- (bool)requirementsMet;
- (id)searchCompleter;
- (void)setAddressFormatter:(id)arg1;
- (void)setCurrentlySelectedField:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditingFields:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFamilyNameTextField:(id)arg1;
- (void)setFirstTextFieldForName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setGivenNameTextField:(id)arg1;
- (void)setHighlightedFieldKeys:(id)arg1;
- (void)setInputAddress:(id)arg1;
- (void)setInputLabel:(id)arg1;
- (void)setOriginalAddress:(id)arg1;
- (void)setOriginalFamilyName:(id)arg1;
- (void)setOriginalGivenName:(id)arg1;
- (void)setOriginalPhoneticFamilyName:(id)arg1;
- (void)setOriginalPhoneticGivenName:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticFamilyNameTextField:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setPhoneticGivenNameTextField:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setRequiredFieldKeys:(id)arg1;
- (void)setRequirementsMet:(bool)arg1;
- (void)setSearchCompleter:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSuggestions:(id)arg1;
- (long long)style;
- (id)suggestions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textDidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (bool)textFieldShouldBeginEditing:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;

@end
