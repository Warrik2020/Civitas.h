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
        void* KindName(int kind) const { void* args[] = { &kind }; return CallStatic("KindName", args, 1); }
        void* KindHint(int kind, bool inGive) const { void* args[] = { &kind, &inGive }; return CallStatic("KindHint", args, 2); }
        void* PoolName(int pool) const { void* args[] = { &pool }; return CallStatic("PoolName", args, 1); }
        void* Term(int ticks, void* cal) const { void* args[] = { &ticks, cal }; return CallStatic("Term", args, 2); }
        void* Grouped(float v) const { void* args[] = { &v }; return CallStatic("Grouped", args, 1); }
        void* Price(float p) const { void* args[] = { &p }; return CallStatic("Price", args, 1); }
        void* Summary(void* item, int performerId, void* nations, void* internals) const { void* args[] = { item, &performerId, nations, internals }; return CallStatic("Summary", args, 4); }
        void AppendSide(void* sb, void* side, int performerId, void* nations, void* internals) const { void* args[] = { sb, side, &performerId, nations, internals }; CallStatic("AppendSide", args, 5); }
        void* PatternName(void* item, int performerId, void* internals) const { void* args[] = { item, &performerId, internals }; return CallStatic("PatternName", args, 3); }
        float AheadOf(void* side, int pool, void* stopAt, void* reserved) const { void* args[] = { side, &pool, stopAt, reserved }; return CallStaticValue<float>("AheadOf", args, 4); }
    };
}
