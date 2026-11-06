#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UnionResult : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UnionResult(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UnionResult") {}
    public:
        void* Ok(const char* m) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(m ? m : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Ok", __callArgs, 1); }
        void* No(const char* m) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(m ? m : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("No", __callArgs, 1); }
        bool ok() const { return ReadField<bool>("ok"); }
        void ok(bool value) const { WriteField<bool>("ok", value); }
        void* message() const { return ReadField<void*>("message"); }
        void message(void* value) const { WriteField<void*>("message", value); }
    };
}
