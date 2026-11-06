#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Identity
{
    class PeopleNaming : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeopleNaming(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Identity", "PeopleNaming") {}
    public:
        void* Adjective(const char* place) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(place ? place : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Adjective", __callArgs, 1); }
        void* CombiningForm(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("CombiningForm", __callArgs, 1); }
        void* Blend(const char* larger, const char* other) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(larger ? larger : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(other ? other : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; return CallStatic("Blend", __callArgs, 2); }
        void* BlendForAxis(const char* larger, const char* other, int axis) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(larger ? larger : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(other ? other : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, &axis }; return CallStatic("BlendForAxis", __callArgs, 3); }
        void* Adjectival(const char* name) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("Adjectival", __callArgs, 1); }
        void* ForAxis(const char* adjective, int axis) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(adjective ? adjective : "") : nullptr; void* __callArgs[] = { managed_0, &axis }; return CallStatic("ForAxis", __callArgs, 2); }
        void* Unique(const char* name, void* taken) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(name ? name : "") : nullptr; void* __callArgs[] = { managed_0, taken }; return CallStatic("Unique", __callArgs, 2); }
    };
}
