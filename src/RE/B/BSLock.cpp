#include "RE/B/BSLock.h"

namespace RE
{
	void BSNonReentrantSpinLock::lock()
	{
		using func_t = decltype(&BSNonReentrantSpinLock::lock);
		static REL::Relocation<func_t> func{ ID::BSNonReentrantSpinLock::Lock };
		return func(this);
	}

	bool BSNonReentrantSpinLock::try_lock()
	{
		using func_t = decltype(&BSNonReentrantSpinLock::try_lock);
		static REL::Relocation<func_t> func{ ID::BSNonReentrantSpinLock::TryLock };
		return func(this);
	}

	void BSNonReentrantSpinLock::unlock()
	{
		using func_t = decltype(&BSNonReentrantSpinLock::unlock);
		static REL::Relocation<func_t> func{ ID::BSNonReentrantSpinLock::Unlock };
		return func(this);
	}

	void BSReadWriteLock::lock_read()
	{
		using func_t = decltype(&BSReadWriteLock::lock_read);
		static REL::Relocation<func_t> func{ ID::BSReadWriteLock::LockRead };
		return func(this);
	}

	void BSReadWriteLock::lock_write()
	{
		using func_t = decltype(&BSReadWriteLock::lock_write);
		static REL::Relocation<func_t> func{ ID::BSReadWriteLock::LockWrite };
		return func(this);
	}

	void BSReadWriteLock::unlock_read()
	{
		using func_t = decltype(&BSReadWriteLock::unlock_read);
		static REL::Relocation<func_t> func{ ID::BSReadWriteLock::UnlockRead };
		return func(this);
	}

	void BSReadWriteLock::unlock_write()
	{
		using func_t = decltype(&BSReadWriteLock::unlock_write);
		static REL::Relocation<func_t> func{ ID::BSReadWriteLock::UnlockWrite };
		return func(this);
	}

	void BSSpinLock::lock()
	{
		using func_t = decltype(&BSSpinLock::lock);
		static REL::Relocation<func_t> func{ ID::BSSpinLock::Lock };
		return func(this);
	}

	bool BSSpinLock::try_lock()
	{
		using func_t = decltype(&BSSpinLock::try_lock);
		static REL::Relocation<func_t> func{ ID::BSSpinLock::TryLock };
		return func(this);
	}

	void BSSpinLock::unlock()
	{
		using func_t = decltype(&BSSpinLock::unlock);
		static REL::Relocation<func_t> func{ ID::BSSpinLock::Unlock };
		return func(this);
	}
}
