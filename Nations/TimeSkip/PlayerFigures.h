#pragma once

// Generated from Assembly-CSharp. Regenerate with GenerateBindings.ps1.
#include "../../CivitasCore.h"

namespace CivitasPoly::Nations::TimeSkip
{
    class PlayerFigures : public CivitasPoly::Internal::ManagedType
    {
    public:
        explicit PlayerFigures(void* object = nullptr, ModAPI* api = g_api)
            : ManagedType(api, object, "CivitasPoly.Nations.TimeSkip", "PlayerFigures") {}
    public:
        int tick() const { return ReadField<int>("tick"); }
        void SetTick(int value) const { WriteField<int>("tick", value); }
        float balance() const { return ReadField<float>("balance"); }
        void SetBalance(float value) const { WriteField<float>("balance", value); }
        float netPerMonth() const { return ReadField<float>("netPerMonth"); }
        void SetNetPerMonth(float value) const { WriteField<float>("netPerMonth", value); }
        float grossPerMonth() const { return ReadField<float>("grossPerMonth"); }
        void SetGrossPerMonth(float value) const { WriteField<float>("grossPerMonth", value); }
        float people() const { return ReadField<float>("people"); }
        void SetPeople(float value) const { WriteField<float>("people", value); }
        float manpower() const { return ReadField<float>("manpower"); }
        void SetManpower(float value) const { WriteField<float>("manpower", value); }
        int divisions() const { return ReadField<int>("divisions"); }
        void SetDivisions(int value) const { WriteField<int>("divisions", value); }
        float soldiers() const { return ReadField<float>("soldiers"); }
        void SetSoldiers(float value) const { WriteField<float>("soldiers", value); }
        int tiles() const { return ReadField<int>("tiles"); }
        void SetTiles(int value) const { WriteField<int>("tiles", value); }
        int techs() const { return ReadField<int>("techs"); }
        void SetTechs(int value) const { WriteField<int>("techs", value); }
        int civFactories() const { return ReadField<int>("civFactories"); }
        void SetCivFactories(int value) const { WriteField<int>("civFactories", value); }
        int milFactories() const { return ReadField<int>("milFactories"); }
        void SetMilFactories(int value) const { WriteField<int>("milFactories", value); }
        float armyPower() const { return ReadField<float>("armyPower"); }
        void SetArmyPower(float value) const { WriteField<float>("armyPower", value); }
        float stability() const { return ReadField<float>("stability"); }
        void SetStability(float value) const { WriteField<float>("stability", value); }
        float taxRate() const { return ReadField<float>("taxRate"); }
        void SetTaxRate(float value) const { WriteField<float>("taxRate", value); }
        float tradeTax() const { return ReadField<float>("tradeTax"); }
        void SetTradeTax(float value) const { WriteField<float>("tradeTax", value); }
        float social() const { return ReadField<float>("social"); }
        void SetSocial(float value) const { WriteField<float>("social", value); }
        float research() const { return ReadField<float>("research"); }
        void SetResearch(float value) const { WriteField<float>("research", value); }
        float civBudget() const { return ReadField<float>("civBudget"); }
        void SetCivBudget(float value) const { WriteField<float>("civBudget", value); }
        float milBudget() const { return ReadField<float>("milBudget"); }
        void SetMilBudget(float value) const { WriteField<float>("milBudget", value); }
        float infraBudget() const { return ReadField<float>("infraBudget"); }
        void SetInfraBudget(float value) const { WriteField<float>("infraBudget", value); }
        float integration() const { return ReadField<float>("integration"); }
        void SetIntegration(float value) const { WriteField<float>("integration", value); }
    };
}
