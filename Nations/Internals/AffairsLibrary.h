#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class AffairsLibrary : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit AffairsLibrary(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "AffairsLibrary") {}
    public:
        void* Event(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Event", __callArgs, 1); }
        void* Phrases(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Phrases", __callArgs, 1); }
        void* Story(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Story", __callArgs, 1); }
        void* Mark(const char* id) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(id ? id : "") : nullptr; void* __callArgs[] = { managed_0 }; return Call("Mark", __callArgs, 1); }
        void* LoadDirectory(const char* dir) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(dir ? dir : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("LoadDirectory", __callArgs, 1); }
        void Parse(const char* text, const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* __callArgs[] = { managed_0, managed_1 }; Call("Parse", __callArgs, 2); }
        void* ParseCond(const char* text, const char* file, int line) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* managed_1 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* __callArgs[] = { managed_0, managed_1, &line }; return Call("ParseCond", __callArgs, 3); }
        bool TryNum(const char* s, float& v) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &v }; return CallStaticValue<bool>("TryNum", __callArgs, 2); }
        bool TryTheme(const char* s, int& theme) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &theme }; return CallStaticValue<bool>("TryTheme", __callArgs, 2); }
        bool TryDuration(const char* s, float& lo, float& hi) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(s ? s : "") : nullptr; void* __callArgs[] = { managed_0, &lo, &hi }; return CallStaticValue<bool>("TryDuration", __callArgs, 3); }
        void Validate() const { Call("Validate", nullptr, 0); }
        void* Stories() const { return ReadField<void*>("Stories"); }
        void* Issues() const { return ReadField<void*>("Issues"); }
    };
}
