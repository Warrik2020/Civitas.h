#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class UiFormat : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit UiFormat(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "UiFormat") {}
    public:
        void AppendNum(void* sb, int64_t v) const { void* __callArgs[] = { sb, &v }; CallStatic("AppendNum", __callArgs, 2); }
        void AppendGrouped(void* sb, int64_t v) const { void* __callArgs[] = { sb, &v }; CallStatic("AppendGrouped", __callArgs, 2); }
        void AppendSigned(void* sb, int v) const { void* __callArgs[] = { sb, &v }; CallStatic("AppendSigned", __callArgs, 2); }
        void Section(void* sb, const char* title, const char* note = nullptr) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(title ? title : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(note ? note : "") : nullptr; void* __callArgs[] = { sb, managed_1, managed_2 }; CallStatic("Section", __callArgs, 3); }
        void Key(void* sb, const char* caption) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* __callArgs[] = { sb, managed_1 }; CallStatic("Key", __callArgs, 2); }
        void KeyVal(void* sb, const char* caption, const char* value) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(caption ? caption : "") : nullptr; void* managed_2 = Api() && Api()->NewString ? Api()->NewString(value ? value : "") : nullptr; void* __callArgs[] = { sb, managed_1, managed_2 }; CallStatic("KeyVal", __callArgs, 3); }
        void Fine(void* sb, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { sb, managed_1 }; CallStatic("Fine", __callArgs, 2); }
        void Note(void* sb, const char* text) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { sb, managed_1 }; CallStatic("Note", __callArgs, 2); }
        void Col(void* sb, int percent) const { void* __callArgs[] = { sb, &percent }; CallStatic("Col", __callArgs, 2); }
        int ValueColumn() const { return ReadStaticField<int>("ValueColumn"); }
        void* SubOpen() const { return ReadStaticField<void*>("SubOpen"); }
        void* SubClose() const { return ReadStaticField<void*>("SubClose"); }
    };
}
