#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::UI
{
    class GameSetupController : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit GameSetupController(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.UI", "GameSetupController") {}
    public:
        void Reprompt(void* candidateIds, const char* prompt, void* onPicked) const { void* managed_1 = Api() && Api()->NewString ? Api()->NewString(prompt ? prompt : "") : nullptr; void* args[] = { candidateIds, managed_1, onPicked }; Call("Reprompt", args, 3); }
        bool PromptForPlayerNation() const { return CallValue<bool>("PromptForPlayerNation", nullptr, 0); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* label() const { return ReadField<void*>("label"); }
        void SetLabel(void* value) const { WriteField<void*>("label", value); }
        void* go() const { return ReadField<void*>("go"); }
        void SetGo(void* value) const { WriteField<void*>("go", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        int flagFor() const { return ReadField<int>("flagFor"); }
        void SetFlagFor(int value) const { WriteField<int>("flagFor", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* word() const { return ReadField<void*>("word"); }
        void SetWord(void* value) const { WriteField<void*>("word", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        int flagFor() const { return ReadField<int>("flagFor"); }
        void SetFlagFor(int value) const { WriteField<int>("flagFor", value); }
        void* wash() const { return ReadField<void*>("wash"); }
        void SetWash(void* value) const { WriteField<void*>("wash", value); }
        void* ring() const { return ReadField<void*>("ring"); }
        void SetRing(void* value) const { WriteField<void*>("ring", value); }
        void* flag() const { return ReadField<void*>("flag"); }
        void SetFlag(void* value) const { WriteField<void*>("flag", value); }
        void* name() const { return ReadField<void*>("name"); }
        void SetName(void* value) const { WriteField<void*>("name", value); }
        void* sub() const { return ReadField<void*>("sub"); }
        void SetSub(void* value) const { WriteField<void*>("sub", value); }
        void* tag() const { return ReadField<void*>("tag"); }
        void SetTag(void* value) const { WriteField<void*>("tag", value); }
        bool hovered() const { return ReadField<bool>("hovered"); }
        void SetHovered(bool value) const { WriteField<bool>("hovered", value); }
        void* tiles() const { return ReadField<void*>("tiles"); }
        void SetTiles(void* value) const { WriteField<void*>("tiles", value); }
        int minX() const { return ReadField<int>("minX"); }
        void SetMinX(int value) const { WriteField<int>("minX", value); }
        int minY() const { return ReadField<int>("minY"); }
        void SetMinY(int value) const { WriteField<int>("minY", value); }
        int maxX() const { return ReadField<int>("maxX"); }
        void SetMaxX(int value) const { WriteField<int>("maxX", value); }
        int maxY() const { return ReadField<int>("maxY"); }
        void SetMaxY(int value) const { WriteField<int>("maxY", value); }
    };
}
