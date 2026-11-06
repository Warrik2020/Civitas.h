#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Military
{
    class DivisionOrigin : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit DivisionOrigin(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Military", "DivisionOrigin") {}
    public:
        void Stamp(void* d, int fromNationId, int toNationId) const { void* args[] = { d, &fromNationId, &toNationId }; CallStatic("Stamp", args, 3); }
        void* Of(void* d, void* nations) const { void* args[] = { d, nations }; return CallStatic("Of", args, 2); }
        void* Resolve(void* nations, int id) const { void* args[] = { nations, &id }; return CallStatic("Resolve", args, 2); }
        void ResetFormer(void* nations) const { void* args[] = { nations }; CallStatic("ResetFormer", args, 1); }
        void* RegisterFormer(void* nations, int id, const char* name, void* color, const char* flag) const { void* managed_2 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* managed_4 = Api() && Api()->NewString ? Api()->NewString(flag ? flag : "") : nullptr; void* args[] = { nations, &id, managed_2, color, managed_4 }; return CallStatic("RegisterFormer", args, 5); }
    };
}
