#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../CivitasCore.h"

namespace CivitasPoly::Nations
{
    class NationRelevance : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit NationRelevance(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations", "NationRelevance") {}
    public:
        void Rank(void* nations, void* internals, void* mil, void* dst, int max = 16) const { void* args[] = { nations, internals, mil, dst, &max }; CallStatic("Rank", args, 5); }
        void* Label(void* t) const { void* args[] = { t }; return CallStatic("Label", args, 1); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        void* tag() const { return ReadField<void*>("tag"); }
        void SetTag(void* value) const { WriteField<void*>("tag", value); }
        int nationId() const { return ReadField<int>("nationId"); }
        void SetNationId(int value) const { WriteField<int>("nationId", value); }
        float score() const { return ReadField<float>("score"); }
        void SetScore(float value) const { WriteField<float>("score", value); }
        int land() const { return ReadField<int>("land"); }
        void SetLand(int value) const { WriteField<int>("land", value); }
        int peak() const { return ReadField<int>("peak"); }
        void SetPeak(int value) const { WriteField<int>("peak", value); }
        int age() const { return ReadField<int>("age"); }
        void SetAge(int value) const { WriteField<int>("age", value); }
        float happiness() const { return ReadField<float>("happiness"); }
        void SetHappiness(float value) const { WriteField<float>("happiness", value); }
        int overlordId() const { return ReadField<int>("overlordId"); }
        void SetOverlordId(int value) const { WriteField<int>("overlordId", value); }
        bool atWar() const { return ReadField<bool>("atWar"); }
        void SetAtWar(bool value) const { WriteField<bool>("atWar", value); }
        float pop() const { return ReadField<float>("pop"); }
        void SetPop(float value) const { WriteField<float>("pop", value); }
        float army() const { return ReadField<float>("army"); }
        void SetArmy(float value) const { WriteField<float>("army", value); }
        float income() const { return ReadField<float>("income"); }
        void SetIncome(float value) const { WriteField<float>("income", value); }
        float tech() const { return ReadField<float>("tech"); }
        void SetTech(float value) const { WriteField<float>("tech", value); }
    };
}
