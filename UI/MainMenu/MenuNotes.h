#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::UI::MainMenu
{
    class MenuNotes : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit MenuNotes(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI.MainMenu", "MenuNotes") {}
    public:
        void* ReadUpdates() const { return CallStatic("ReadUpdates", nullptr, 0); }
        void* ReadCredits() const { return CallStatic("ReadCredits", nullptr, 0); }
        void* PathOf(const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("PathOf", __callArgs, 1); }
        void* ParseUpdates(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("ParseUpdates", __callArgs, 1); }
        void* ParseCredits(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStatic("ParseCredits", __callArgs, 1); }
        bool IsNew(const char* version) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(version ? version : "") : nullptr; void* __callArgs[] = { managed_0 }; return CallStaticValue<bool>("IsNew", __callArgs, 1); }
        void MarkSeen(const char* version) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(version ? version : "") : nullptr; void* __callArgs[] = { managed_0 }; CallStatic("MarkSeen", __callArgs, 1); }
        void* UpdatesFile() const { return ReadStaticField<void*>("UpdatesFile"); }
        void* CreditsFile() const { return ReadStaticField<void*>("CreditsFile"); }
        void* LicencesFile() const { return ReadStaticField<void*>("LicencesFile"); }
    };
}
