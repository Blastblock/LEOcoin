#ifndef BRIDGETRANSLATIONS_H
#define BRIDGETRANSLATIONS_H
#include <QObject>

// Get strings in debug console `dumpStrings()`
// TODO: Automate this process, move into include and generate include...
static const char *html_strings[] = {
QT_TRANSLATE_NOOP("LEOcoinBridge", "Overview"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Send"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Receive"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Transactions"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Address Book"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Chat"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Notifications"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Options"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet Management"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add New Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Import Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Advanced"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Backup"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Backup Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Encrypt Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Change Passphrase"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "(Un)lock Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Tools"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Chain Data"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Block Explorer"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Sign Message"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Verify Message"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Debug"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "About LEOcoin"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "About QT"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "QR code"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Address:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Label:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Narration:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Amount:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "LEO"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "mLEO"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "µLEO"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Satoshi"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add new receive address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Normal"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Stealth"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "BIP32"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add Address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add a new contact"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Address Lookup"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Address Type"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Label"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Public Key"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Transaction Hash"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Recent Transactions"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Market"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Advanced Options"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Coin Control"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Make payment"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Balance transfer"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Select Inputs"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Automatically selected"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Quantity:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Fee:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "After Fee:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Bytes:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Priority:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "LowOutput:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Change:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Custom change address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "From account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "PUBLIC"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "PRIVATE"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Balance:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Ring Size:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "To account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Pay to"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Narration"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Amount"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Default Stealth Address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add Recipient"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Clear All"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Suggest Ring Size"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Send Payment"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "RECEIVE"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Filter by type.."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Type"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Show QR Code"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "New Address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Copy Address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "TRANSACTIONS"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Date"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "ADDRESSBOOK"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Delete"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start Private Conversation"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Name:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Public Key:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start Conversation"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Choose identity"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Identity:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start Group Conversation"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Group name:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Create Group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Invite others"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Search"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Invite others to group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Invite to Group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Invite"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "GROUP"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "BOOK"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start private conversation"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start group conversation"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "CHAT"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Leave Group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "CHAIN DATA"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Coin Value"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Owned (Mature)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "System (Mature)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Spends"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Least Depth"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "BLOCK EXPLORER"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Refresh"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Hash"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Height"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Timestamp"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Value Out"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "OPTIONS"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Main"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Network"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Window"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Display"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "I2P"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Tor"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Start LEOcoin on system login"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Detach databases at shutdown"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Pay transaction fee:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Optional transaction fee per kB that helps make sure your transactions are processed quickly."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Most transactions are 1kB. Fee 0.01 recommended."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enable Staking"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Reserve:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Reserved amount does not participate in staking and is therefore spendable at any time."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Minimum Stake Interval"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Minimum Ring size:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Maximum Ring size:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Automatically select ring size"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enable Secure messaging"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Thin Mode (Requires Restart)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Thin Full Index"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Thin Index Window"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Map port using UPnP"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Connect through SOCKS proxy:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Details"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Proxy IP:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Port:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "SOCKS Version:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Minimize to the tray instead of the taskbar"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Minimize on close"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "User Interface language:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Unit to show amounts in:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Rows per page:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Display addresses in transaction list"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Notifications:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Visible Transaction Types:"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "I2P (coming soon)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "TOR (coming soon)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Cancel"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Apply"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Ok"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Lets create a New Wallet and Account to get you started!"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet Name"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Password"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Add an optional Password to secure the Recovery Phrase (shown on next page)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Would you like to create a Multi-Account HD Key? (BIP44)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Language"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "English"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "French"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Japanese"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Spanish"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Chinese (Simplified)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Chinese (Traditional)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Next Step"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Write your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Recovery Phrase"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Important!"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "You need the Wallet Recovery Phrase to restore this wallet. Write it down and keep them somewhere safe.\n\
                                                          You will be asked to confirm the Wallet Recovery Phrase in the next screen to ensure you have written it down correctly"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Back"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Please confirm your Wallet Recovery Phrase"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Congratulations! You have successfully created a New Wallet and Account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password (if set) safe in case you ever need to recover your wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Lets import your Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "The Wallet Recovery Phrase could require a password to be imported"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Is this a Multi-Account HD Key (BIP44)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Recovery Phrase (Usually 24 words)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Congratulations! You have successfully imported your Wallet from your Recovery Phrase"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "You can now use your Account to send and receive funds :)\n\
                            Remember to keep your Wallet Recovery Phrase and Password safe in case you ever need to recover your wallet again!"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Accounts"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "ID"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Name"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Created"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Active Account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Default"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet Keys"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Path"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Active"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Master"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Make Default"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Activate/Deactivate"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Set as Master"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Tor connection offline"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "i2p connection offline"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet is encrypted and currently locked"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Not staking because wallet is offline"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "0 active connections to LEOcoin network"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet is syncing"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Open chat list"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a label for this address to add it to your address book"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a address to add it to your address book"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Inputs"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Values"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Outputs"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a LEOcoin address to sign the message with (e.g. 8MfTCSnMvix9mVVNb2MGiEw92GpLrvzhVp)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter the message you want to sign"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Click sign message to generate signature"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Copy the signed message signature"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a LEOcoin address to verify the message with (e.g. 8MfTCSnMvix9mVVNb2MGiEw92GpLrvzhVp)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter the message you want to verify"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a LEOcoin signature"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Paste signature from clipboard"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Your total balance"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Balances overview"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Recent in/out transactions or stakes"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Select inputs to spend"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Optional address to receive transaction change"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Choose from address book"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Paste address from clipboard"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Remove this recipient"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Current spendable send payment balance"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Current spendable balance to account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "The address to send the payment to"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a label for this address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a short note to send with payment (max 24 characters)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "The address to transfer the balance to"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "The label for this address"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Amount to transfer"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Send to multiple recipients at once"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Double click to edit"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Date and time that the transaction was received."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Transaction status. Hover over this field to show number of confirmations."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Type of transaction."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Destination address of transaction."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Short payment note."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Amount removed from or added to balance."),
QT_TRANSLATE_NOOP("LEOcoinBridge", "The address to send the payment to  (e.g. SXywGBZBowrppUwwNUo1GCRDTibzJi7g2M)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Choose address from address book"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a public key for the address above"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a label for this group"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Name for this Wallet"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter a password"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Would you like to create a bip44 path?"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Your recovery phrase (Keep this safe!)"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Wallet Name for recovered account"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Enter the password for the wallet you are trying to recover"),
QT_TRANSLATE_NOOP("LEOcoinBridge", "Is this a bip44 path?"),
    0 // Leave this here...
};
#endif // BRIDGETRANSLATIONS_H
