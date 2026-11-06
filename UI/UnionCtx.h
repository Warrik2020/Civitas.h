#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionCtx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionCtx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionCtx") {}
    public:
        void* Resolve() const { return CallStatic("Resolve", nullptr, 0); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void SetInternals(void* value) const { WriteField<void*>("internals", value); }
        int player() const { return ReadField<int>("player"); }
        void SetPlayer(int value) const { WriteField<int>("player", value); }
        void* it() const { return ReadField<void*>("it"); }
        void SetIt(void* value) const { WriteField<void*>("it", value); }
        void* union_() const { return ReadField<void*>("union"); }
        void SetUnion(void* value) const { WriteField<void*>("union", value); }
    };
}
