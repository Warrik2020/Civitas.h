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
        void* PathOf(const char* file) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(file ? file : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("PathOf", args, 1); }
        void* ParseUpdates(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("ParseUpdates", args, 1); }
        void* ParseCredits(const char* text) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(text ? text : "") : nullptr; void* args[] = { managed_0 }; return CallStatic("ParseCredits", args, 1); }
        bool IsNew(const char* version) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(version ? version : "") : nullptr; void* args[] = { managed_0 }; return CallStaticValue<bool>("IsNew", args, 1); }
        void MarkSeen(const char* version) const { void* managed_0 = Api() && Api()->NewString ? Api()->NewString(version ? version : "") : nullptr; void* args[] = { managed_0 }; CallStatic("MarkSeen", args, 1); }
        void* UpdatesFile() const { return ReadStaticField<void*>("UpdatesFile"); }
        void* CreditsFile() const { return ReadStaticField<void*>("CreditsFile"); }
        void* LicencesFile() const { return ReadStaticField<void*>("LicencesFile"); }
        void* version() const { return ReadField<void*>("version"); }
        void SetVersion(void* value) const { WriteField<void*>("version", value); }
        void* date() const { return ReadField<void*>("date"); }
        void SetDate(void* value) const { WriteField<void*>("date", value); }
        void* title() const { return ReadField<void*>("title"); }
        void SetTitle(void* value) const { WriteField<void*>("title", value); }
        void* notes() const { return ReadField<void*>("notes"); }
        void* changes() const { return ReadField<void*>("changes"); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* note() const { return ReadField<void*>("note"); }
        void SetNote(void* value) const { WriteField<void*>("note", value); }
        void* heading() const { return ReadField<void*>("heading"); }
        void SetHeading(void* value) const { WriteField<void*>("heading", value); }
        bool second() const { return ReadField<bool>("second"); }
        void SetSecond(bool value) const { WriteField<bool>("second", value); }
        void* lines() const { return ReadField<void*>("lines"); }
    };
}
