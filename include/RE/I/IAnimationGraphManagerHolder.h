#pragma once
#include "RE/B/BSTSmartPointer.h"

namespace RE
{
	class BSAnimationGraphManager;

	class IAnimationGraphManagerHolder
	{
	public:
		virtual ~IAnimationGraphManagerHolder();  // 00

		// add
		virtual void Unk_01();                                                                                         // 01
		virtual void Unk_02();                                                                                         // 02
		virtual bool GetAnimationGraphManagerImpl(BSTSmartPointer<BSAnimationGraphManager>& a_animGraphMgr);           // 03
		virtual void Unk_04();                                                                                         // 04
		virtual void Unk_05();                                                                                         // 05
		virtual void Unk_06();                                                                                         // 06
		virtual bool UnkFlag();                                                                                        // 07 - [Actor/Player: checks that flag 128 is not set on *(this + 0x448)] [Ref: Always False]
		virtual void Unk_08();                                                                                         // 08
		virtual void Unk_09();                                                                                         // 09
		virtual void Unk_0A();                                                                                         // 0A
		virtual void Unk_0B();                                                                                         // 0B
		virtual void Unk_0C();                                                                                         // 0C
		virtual void Unk_0D();                                                                                         // 0D
		virtual void Unk_0E();                                                                                         // 0E
		virtual void Unk_0F();                                                                                         // 0F
		virtual void Unk_10();                                                                                         // 10
		virtual bool ShouldUpdateAnimation();                                                                          // 11 - [Actor/Player: checks that flag 512 is set on *(loadedData->handleList + 0x8)] [Ref: Always True]
		virtual void Unk_12();                                                                                         // 12
		virtual void Unk_13();                                                                                         // 13
		virtual void Unk_14();                                                                                         // 14
		virtual void PreUpdateAnimationGraphManager(const BSTSmartPointer<BSAnimationGraphManager>& a_animGraphMgr);   // 15
		virtual void PostUpdateAnimationGraphManager(const BSTSmartPointer<BSAnimationGraphManager>& a_animGraphMgr);  // 16
		virtual void Unk_17();                                                                                         // 17
		virtual void Unk_18();                                                                                         // 18
	};
}
