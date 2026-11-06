#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesCtx : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesCtx(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesCtx") {}
    public:
        void* Resolve() const { return CallStatic("Resolve", nullptr, 0); }
        void* nations() const { return ReadField<void*>("nations"); }
        void SetNations(void* value) const { WriteField<void*>("nations", value); }
        void* internals() const { return ReadField<void*>("internals"); }
        void SetInternals(void* value) const { WriteField<void*>("internals", value); }
        void* revolts() const { return ReadField<void*>("revolts"); }
        void SetRevolts(void* value) const { WriteField<void*>("revolts", value); }
        void* identity() const { return ReadField<void*>("identity"); }
        void SetIdentity(void* value) const { WriteField<void*>("identity", value); }
        int player() const { return ReadField<int>("player"); }
        void SetPlayer(int value) const { WriteField<int>("player", value); }
        void* it() const { return ReadField<void*>("it"); }
        void SetIt(void* value) const { WriteField<void*>("it", value); }
    };
}
