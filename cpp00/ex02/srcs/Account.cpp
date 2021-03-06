#include "Account.hpp"


int Account::_nbAccounts(0);
int Account::_totalAmount(0);
int Account::_totalNbDeposits(0);
int Account::_totalNbWithdrawals(0);
struct tm * Account::_t(0);

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void Account::printTimeStamp( void )
{
	std::cout << "[" << _t->tm_year + 1900 << _t->tm_mon + 1 << _t->tm_mday << "_" << _t->tm_hour << _t->tm_min << _t->tm_sec <<"]";
}

void Account::displayAccountsInfos( void )
{
	printTimeStamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:"
				<< getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )
{
	std::time_t result = std::time(nullptr);
	_t = (struct tm *)std::localtime(&result);

	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	printTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";created" << std::endl;
	_nbAccounts++;
	_totalAmount = _totalAmount + _amount;
}
Account::~Account( void )
{
	printTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount <<";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount(_amount);
	_amount = _amount + deposit;
	_totalAmount = _totalAmount + deposit;
	_nbDeposits = _nbDeposits + 1;
	_totalNbDeposits = _totalNbDeposits + 1;

	printTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposits:" 
				<< deposit <<";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount(_amount);
	bool tf(true);

	_amount = _amount - withdrawal;
	if (_amount < 0)
	{
		_amount = _amount + withdrawal;
		tf = false;
	}
	if (tf)
	{
		_totalAmount = _totalAmount - withdrawal;
		_nbWithdrawals = _nbWithdrawals + 1;
		_totalNbWithdrawals = _totalNbWithdrawals + 1;
	}
	printTimeStamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:";
	if (tf)
		std::cout << withdrawal << ";amount:" << _amount << ";_nbWithdrawals:" << _nbWithdrawals << std::endl;
	else
		std::cout << "refused" << std::endl;
	return (tf);
}
int		Account::checkAmount( void ) const
{
	return (0);
}
void	Account::displayStatus( void ) const
{
	printTimeStamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
				<< _nbDeposits <<";withdrawals:" << _nbWithdrawals << std::endl;
}