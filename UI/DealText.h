#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class DealText : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DealText(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "DealText") {}
    public:
        void* KindName(int kind) const { void* __callArgs[] = { &kind }; return CallStatic("KindName", __callArgs, 1); }
        void* KindHint(int kind, bool inGive) const { void* __callArgs[] = { &kind, &inGive }; return CallStatic("KindHint", __callArgs, 2); }
        void* PoolName(int pool) const { void* __callArgs[] = { &pool }; return CallStatic("PoolName", __callArgs, 1); }
        void* Term(int ticks, void* cal) const { void* __callArgs[] = { &ticks, cal }; return CallStatic("Term", __callArgs, 2); }
        void* Grouped(float v) const { void* __callArgs[] = { &v }; return CallStatic("Grouped", __callArgs, 1); }
        void* Price(float p) const { void* __callArgs[] = { &p }; return CallStatic("Price", __callArgs, 1); }
        void* Summary(void* item, int performerId, void* nations, void* internals) const { void* __callArgs[] = { item, &performerId, nations, internals }; return CallStatic("Summary", __callArgs, 4); }
        void AppendSide(void* sb, void* side, int performerId, void* nations, void* internals) const { void* __callArgs[] = { sb, side, &performerId, nations, internals }; CallStatic("AppendSide", __callArgs, 5); }
        void* PatternName(void* item, int performerId, void* internals) const { void* __callArgs[] = { item, &performerId, internals }; return CallStatic("PatternName", __callArgs, 3); }
        float AheadOf(void* side, int pool, void* stopAt, void* reserved) const { void* __callArgs[] = { side, &pool, stopAt, reserved }; return CallStaticValue<float>("AheadOf", __callArgs, 4); }
    };
}
