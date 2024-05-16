namespace hellmath {

	enum class AccountStatus
	{
		troll,
		guest,
		user,
		mod
	};

	enum class Action
	{
		read,
		write,
		remove
	};

	bool display_post(AccountStatus poster, AccountStatus viewer)
	{
		if (viewer == AccountStatus::troll) return true;
		return poster != AccountStatus::troll;
	}

	bool permission_check(Action action, AccountStatus account_status)
	{
		switch (action)
		{
		case Action::read:
			return true;
		case Action::write:
			return account_status != AccountStatus::guest;
		case Action::remove:
			return account_status == AccountStatus::mod;
		default:
			return false;
		}
	}

	bool valid_player_combination(AccountStatus player1, AccountStatus player2)
	{
		if (player1 == AccountStatus::guest || player2 == AccountStatus::guest) return false;
		return (player1 == AccountStatus::troll) == (player2 == AccountStatus::troll);
	}

	bool has_priority(AccountStatus player1, AccountStatus player2)
	{
		return player1 > player2;
	}


}  // namespace hellmath