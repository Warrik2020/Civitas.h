#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class PeoplesResult : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeoplesResult(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "PeoplesResult") {}
    public:
        void* Ok(const char* m) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(m ? m : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("Ok", args, 1); }
        void* No(const char* m) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(m ? m : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("No", args, 1); }
        bool ok() const { return ReadField<bool>("ok"); }
        void SetOk(bool value) const { WriteField<bool>("ok", value); }
        void* message() const { return ReadField<void*>("message"); }
        void SetMessage(void* value) const { WriteField<void*>("message", value); }
    };
}
