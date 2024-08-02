#pragma once

#include "RE/B/BSIntrusiveRefCounted.h"
#include "RE/B/BSTEvent.h"

namespace RE
{
	class BSAnimationGraphEvent;
	struct BSMovementDataChangedEvent;
	struct BSSubGraphActivationUpdate;
	class BSTransformDeltaEvent;
	class BSAnimationUpdateData;

	class BSAnimationGraph :
		public BSIntrusiveRefCounted,
		public BSTEventSource<BSAnimationGraphEvent>,
		public BSTEventSource<BSMovementDataChangedEvent>,
		public BSTEventSource<BSSubGraphActivationUpdate>,
		public BSTEventSource<BSTransformDeltaEvent>
	{
	public:
		virtual ~BSAnimationGraph();

		virtual void Unk_01();                                     // 01
		virtual void Unk_02();                                     // 02
		virtual void Unk_03();                                     // 03
		virtual void Update(BSAnimationUpdateData& a_updateData);  // 04
		virtual void Unk_05();                                     // 05
		virtual void Unk_06();                                     // 06
		virtual void Unk_07();                                     // 07
		virtual void Unk_08();                                     // 08
		virtual void Unk_09();                                     // 09
		virtual void Unk_0A();                                     // 0A
		virtual void Unk_0B();                                     // 0B
		virtual void Unk_0C();                                     // 0C
		virtual void Unk_0D();                                     // 0D
		virtual void Unk_0E();                                     // 0E
		virtual void Unk_0F();                                     // 0F
		virtual void Unk_10();                                     // 10
		virtual void Unk_11();                                     // 11
		virtual void Unk_12();                                     // 12
		virtual void Unk_13();                                     // 13
		virtual void Unk_14();                                     // 14
		virtual void Unk_15();                                     // 15
		virtual void Unk_16();                                     // 16
		virtual void Unk_17();                                     // 17
		virtual void Unk_18();                                     // 18
		virtual void Unk_19();                                     // 19
		virtual void Unk_1A();                                     // 1A
		virtual void Unk_1B();                                     // 1B
		virtual void Unk_1C();                                     // 1C
		virtual void Unk_1D();                                     // 1D
		virtual void Unk_1E();                                     // 1E
		virtual void Unk_1F();                                     // 1F
		virtual void Unk_20();                                     // 20
		virtual void Unk_21();                                     // 21
		virtual void Unk_22();                                     // 22
		virtual void Unk_23();                                     // 23
		virtual void Unk_24();                                     // 24
		virtual void Unk_25();                                     // 25
		virtual void Unk_26();                                     // 26
		virtual void Unk_27();                                     // 27
		virtual void Unk_28();                                     // 28
		virtual void Unk_29();                                     // 29
		virtual void Unk_2A();                                     // 2A
		virtual void Unk_2B();                                     // 2B
		virtual void Unk_2C();                                     // 2C
	};

	class BSAnimationGraphManager :
		public BSTEventSink<BSAnimationGraphEvent>,
		public BSIntrusiveRefCounted
	{
	public:
		uint16_t          graphsSize;      // 0C
		uint16_t          unk0E;           // 0E
		std::byte         unk10[0xE];      // 10
		uint16_t          activeGraphIdx;  // 1E
		std::byte         unk20[0x1C];     // 20
		BSAnimationGraph* graphs;          // 40 - unknown array type
	};
	static_assert(offsetof(BSAnimationGraphManager, BSAnimationGraphManager::graphsSize) == 0xC);
	static_assert(offsetof(BSAnimationGraphManager, BSAnimationGraphManager::unk0E) == 0xE);
	static_assert(offsetof(BSAnimationGraphManager, BSAnimationGraphManager::activeGraphIdx) == 0x1E);
	static_assert(offsetof(BSAnimationGraphManager, BSAnimationGraphManager::graphs) == 0x40);
}
