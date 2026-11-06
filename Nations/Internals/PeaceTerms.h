#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::Internals
{
    class PeaceTerms : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PeaceTerms(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.Internals", "PeaceTerms") {}
    public:
        void CollectTakenTiles(void* dst) const { void* __callArgs[] = { dst }; Call("CollectTakenTiles", __callArgs, 1); }
        void* GrantFor(int nationId) const { void* __callArgs[] = { &nationId }; return Call("GrantFor", __callArgs, 1); }
        int loserId() const { return ReadField<int>("loserId"); }
        void loserId(int value) const { WriteField<int>("loserId", value); }
        int victorId() const { return ReadField<int>("victorId"); }
        void victorId(int value) const { WriteField<int>("victorId", value); }
        void* annexTiles() const { return ReadField<void*>("annexTiles"); }
        void* carves() const { return ReadField<void*>("carves"); }
        void* grants() const { return ReadField<void*>("grants"); }
        void* cosigners() const { return ReadField<void*>("cosigners"); }
        void* expulsions() const { return ReadField<void*>("expulsions"); }
        bool grantsDrawn() const { return ReadField<bool>("grantsDrawn"); }
        void grantsDrawn(bool value) const { WriteField<bool>("grantsDrawn", value); }
        bool vassalizeLoser() const { return ReadField<bool>("vassalizeLoser"); }
        void vassalizeLoser(bool value) const { WriteField<bool>("vassalizeLoser", value); }
        void* loserIdeology() const { return ReadField<void*>("loserIdeology"); }
        void loserIdeology(void* value) const { WriteField<void*>("loserIdeology", value); }
        bool annexLoser() const { return ReadField<bool>("annexLoser"); }
        void annexLoser(bool value) const { WriteField<bool>("annexLoser", value); }
        float gold() const { return ReadField<float>("gold"); }
        void gold(float value) const { WriteField<float>("gold", value); }
        int factories() const { return ReadField<int>("factories"); }
        void factories(int value) const { WriteField<int>("factories", value); }
        float populationFraction() const { return ReadField<float>("populationFraction"); }
        void populationFraction(float value) const { WriteField<float>("populationFraction", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void divisions(int value) const { WriteField<int>("divisions", value); }
        bool freeTheirVassals() const { return ReadField<bool>("freeTheirVassals"); }
        void freeTheirVassals(bool value) const { WriteField<bool>("freeTheirVassals", value); }
        bool breakTheirAlliances() const { return ReadField<bool>("breakTheirAlliances"); }
        void breakTheirAlliances(bool value) const { WriteField<bool>("breakTheirAlliances", value); }
    };
}
